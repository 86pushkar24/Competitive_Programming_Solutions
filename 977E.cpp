#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        --u,--v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n,false);
    vector<int> cyc;
    function<void(int)> dfs=[&](int u){
        vis[u]=true;
        cyc.push_back(u);
        for(int it:adj[u]){
            if(!vis[it])dfs(it);
        }
    };
    int res=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
            bool pos=true;
            for(int it:cyc){
                if(adj[it].size()!=2){
                    pos=false;
                    break;
                }
            }
            if(pos)res++;
            cyc.clear();
        }
    }
    cout<<res<<'\n';
}
