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
        for(int i=0; i<n; i++){
            std::cin>>v[i].first>>v[i].second;
            s2.insert(v[i].second);
        }
        std::map<int,int> m;
        std::vector<int> u;
        int sz=0;
        for(auto x:s2)m[x]=sz++,u.push_back(x);
        for(int i=0; i<n; i++)s1[v[i].first].push_back(m[v[i].second]);
        std::vector seg(2,std::vector<int>(2*sz));
        auto up=[&](int a,int i,int b)->void{
            i+=sz;
            seg[a][i]+=b;
            while(i>1)seg[a][i>>1]=seg[a][i]+seg[a][i^1],i>>=1;
        };  
        auto find=[&](int l,int r,int a)->int {
            int res=0;
            for(l+=sz,r+=sz; l<r; l>>=1,r>>=1){
                if(l&1)res+=seg[a][l++];
                if(r&1)res+=seg[a][--r];
            }  
            return res;
        }; 
        int x1=0,y1=0,k=0;
        for(int i=0; i<n; i++)seg[0][m[v[i].second]+sz]++;
        for(int i=sz-1; i>0; i--)seg[0][i]=seg[0][2*i]+seg[0][2*i+1];
        for(auto [x,y]:s1){
            while(1){
                int l=0,r=sz;
                while(l!=r){
                    int m=(l+r)/2;
                    if(find(0,m,0)>=k+1&&find(0,m,1)>=k+1)r=m;
                    else l=m+1;
                }
                if(r<sz&&find(l,sz,0)>=k+1&&find(l,sz,1)>=k+1){
                    k++;
                    x1=x,y1=u[l];
                }
                else break;
            }
            for(auto z:y){
                up(0,z,-1);
                up(1,z,1);
            }
        }
        std::cout<<k<<'\n'<<x1<<' '<<y1<<'\n';
    }
    return 0;
}
