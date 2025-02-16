// Practice clean code - 14
#include"bits/stdc++.h"
int main(){
    int tc;
    std::cin>>tc;
    while(tc--){
        int n;
        std::cin>>n;
        std::vector<int> v(n);
        std::vector<std::vector<int>> g(n);
        for(int i=0;i<n;i++)std::cin>>v[i],v[i]--,g[v[i]].push_back(i);
        std::set<int> s;
        std::vector<int> d(2*n,0);
        for(int i=n-1;i>=0;i--)s.insert(v[i]),d[i+n]=s.size();
        std::vector<int> seg1(2*n),seg2(2*n);
        for(int i=0;i<n;i++)seg1[i+n]=v[i],seg2[i+n]=v[i];
        for(int i=n-1;i>0;i--){
            seg1[i]=std::max(seg1[2*i],seg1[2*i+1]);
            seg2[i]=std::min(seg2[2*i],seg2[2*i+1]);
        }
        auto up=[&](int a)->void {
            int l=0,r=g[a].back()+1;
            for(l+=n,r+=n;l<r;l>>=1,r>>=1){
                if(l&1)d[l++]-=1;
                if(r&1)d[--r]-=1;
            }
            for(auto x:g[a]){
                int i=x+n;
                seg1[i]=0;
                seg2[i]=1e9;
                while(i>1){
                    seg1[i>>1]=std::max(seg1[i],seg1[i^1]);
                    seg2[i>>1]=std::min(seg2[i],seg2[i^1]);
                    i>>=1;
                }
            }
        };
        auto find=[&](int l,int r,int a)->int {
            if(a==1){
                int ans=0;
                for(l+=n,r+=n;l<r;l>>=1,r>>=1){
                    if(l&1)ans=std::max(ans,seg1[l++]);
                    if(r&1)ans=std::max(ans,seg1[--r]);
                }
                return ans;
            }else{
                int ans=1e9;
                for(l+=n,r+=n;l<r;l>>=1,r>>=1){
                    if(l&1)ans=std::min(ans,seg2[l++]);
                    if(r&1)ans=std::min(ans,seg2[--r]);
                }
                return ans;
            }
        };
        auto val=[&](int a)->int {
            int ans=d[a];
            while(a>1)ans+=d[a>>1],a>>=1;
            return ans;
        };
        std::vector<int> ans;
        int l=0,ch=n;
        while(ans.size()<s.size()){
            while(ch<2*n&&val(ch)>=s.size()-ans.size())ch++;
            int a;
            if(ans.size()%2==0)a=find(l,ch-n,1);
            else a=find(l,ch-n,0);
            int i=0;
            while(i<g[a].size()&&g[a][i]<l)i++;
            l=g[a][i]+1;
            up(a);
            ans.push_back(a);
        }
        std::cout<<ans.size()<<'\n';
        for(auto x:ans)std::cout<<x+1<<' ';
        std::cout<<'\n';
    }
}
