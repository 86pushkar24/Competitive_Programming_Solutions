#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
vector<int>di;
queue<int>q;
pair<int,int>dfs(int v,int par){
    pair<int,int>ans={0,v};
    for(int u:adj[v]){
        if(u!=par){
            auto c=dfs(u,v);
            if(ans.first<c.first+1)ans={c.first+1,c.second};
        }
    }
    return ans;
}
void dfs1(int v,int par,int d){
    di[v]=max(di[v],d);
    for(int u:adj[v])if(u!=par)dfs1(u,v,d+1);
}
signed main(){
    int n;
    cin>>n;
    adj.resize(n);
    di.resize(n);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int node1=dfs(0,-1).second;
    int node2=dfs(node1,-1).second;
    int d=dfs(node1,-1).first;
    dfs1(node1,-1,0);
    dfs1(node2,-1,0);
    vector<int>ans(n+1);
    int curr=n+1;
    for(int i=d+1;i<=n;i++)ans[i]=n;
    sort(di.begin(),di.end());
    reverse(di.begin(),di.end());
    int p=0;
    for(int i=d;i>=1;i--){
        while(p<n&&di[p]==i){
            curr--;
            p++;
        }
        ans[i]=curr;
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
