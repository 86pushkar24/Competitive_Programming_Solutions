#include"bits/stdc++.h"
using namespace std;
#define int long long
const int MOD=998244353;
signed main(){    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>tree(n+1);
        vector<int>parent(n+1);
        for(int i=2;i<=n;++i){
            int x;
            cin>>x;
            parent[i]=x;
            tree[x].push_back(i);
        }
        vector<int>depth(n+1,0);
        depth[1]=1;
        function<void(int)>dfs_depth=[&](int node){
            for(int child:tree[node]){
                depth[child]=depth[node]+1;
                dfs_depth(child);
            }
        };
        dfs_depth(1);
        vector<vector<int>>depth_nodes(n+2);
        for(int i=1;i<=n;++i)depth_nodes[depth[i]].push_back(i);
        int sum=0;
        function<void(int)>dfs_sum=[&](int node){
            for(int child:tree[node])dfs_sum(child);
            if(node!=1)sum=(sum+depth_nodes[depth[node]-1].size()-1)%MOD;
            else sum=(sum+tree[node].size())%MOD;
        };
        dfs_sum(1);
        cout<<(sum+1)%MOD;
        cout<<endl;
    }
    return 0;
}
