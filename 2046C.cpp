#include<bits/stdc++.h>
int main(){
    int t=1;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<std::pair<int,int>> v(n);
        std::map<int,std::vector<int>> s1;
        std::set<int> s2;
        for(int i=0;i<n;i++){
            std::cin>>v[i].first>>v[i].second;
            s2.insert(v[i].second);
        }
        std::map<int,int> m;
        std::vector<int> u;
        int sz=0;
        for(auto x:s2)m[x]=sz++,u.push_back(x);
        for(int i=0;i<n;i++)s1[v[i].first].push_back(m[v[i].second]);
        std::vector seg(2,std::vector<int>(2*sz));
        auto up=[&](int a,int i,int b)->void {
            i+=sz;
            seg[a][i]+=b;
            while(i>1)seg[a][i>>1]=seg[a][i]+seg[a][i^1],i>>=1;
        };
        auto find=[&](int l,int r,int a)->int {
            int res=0;
            for(l+=sz,r+=sz;l<r;l>>=1,r>>=1){
                if(l&1)res+=seg[a][l++];
                if(r&1)res+=seg[a][--r];
            }
            return res;
        };
        int x1=0,y1=0,k=0;
        int t1=n,t2=0;
        for(int i=0;i<n;i++)seg[0][m[v[i].second]+sz]++;
        for(int i=sz-1;i>0;i--)seg[0][i]=seg[0][2*i]+seg[0][2*i+1];
        for(auto [x,y]:s1){
            int l=0,r=sz-1;
            while(l!=r){
                int m=(l+r+1)/2;
                if(2*find(0,m,0)<=t1&&2*find(0,m,1)<=t2)l=m;
                else r=m-1;
            }
            int a1=find(l,sz,0),a2=find(l,sz,1);
            if(std::min({a1,t1-a1,a2,t2-a2})>k){
                k=std::min({a1,t1-a1,a2,t2-a2});
                x1=x,y1=u[l];
            }
            for(auto z:y){
                up(0,z,-1);
                up(1,z,1);
                t1--,t2++;
            }
        }
        std::cout<<k<<'\n'<<x1<<' '<<y1<<'\n';
    }
    return 0;
}
