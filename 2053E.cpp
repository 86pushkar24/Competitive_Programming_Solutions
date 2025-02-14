#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        vector<vector<int>> adj(n);
        for(int i=1;i<n;i++){
            long long u,v;
            cin>>u>>v;
            --u,--v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        long long ans=0;
        long long leaves=0;
        for(int i=0;i<n;i++){
            if(adj[i].size()==1){
                leaves++;
            }
        }
        ans+=leaves*(n-leaves);
        vector<long long> x(n,0),y(n,0);
        int root=-1;
        for(int i=0;i<n;i++){
            if(adj[i].size()>1){
                root=i;
            }
        }
        vector<bool> L(n,0);
        function<void(int,bool,int)> dfs=[&](int u,bool has,int p){
            int c=0;
            for(auto it:adj[u]){
                if(it==p)
                    continue;
                if(adj[it].size()==1)
                    c++;
            }
            for(auto it:adj[u]){
                if(it==p)
                    continue;
                dfs(it,c>0,u);
                y[u]+=y[it];
                x[u]+=x[it];
            }
            for(auto it:adj[u]){
                if(it==p)
                    continue;
                ans+=(x[it])*(y[u]-y[it]);
                if(c==0)
                    ans+=y[it];
                if(L[it])
                    ans+=x[it];
            }
            if(adj[u].size()>1&&has)
                y[u]++;
            if(c==0&&adj[u].size()>1)
                x[u]++;
            else if(c!=0)
                L[u]=1;
        };
        if(root!=-1)dfs(root,-1,-1);
        cout<<ans<<endl;
    }
    return 0;
}
