#include<bits/stdc++.h>
using namespace std;
void dfs(int v,vector<bool>& vis,vector<vector<int>>& g,set<int>& s){
    vis[v]=1;
    s.insert(v);
    for(int u:g[v]){
        if(!vis[u])
            dfs(u,vis,g,s);
    }
}
void dfs1(int v,vector<bool>& vis,vector<vector<int>>& g,set<int>& s){
    vis[v]=1;
    for(int u:g[v]){
        if(!vis[u]&&s.find(u)!=s.end())
            dfs1(u,vis,g,s);
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m1,m2;
        cin>>n>>m1>>m2;
        vector<vector<int>> g1(n+1),g2(n+1);
        vector<bool> vis(n+1),vis1(n+1);
        int ans1=0,ans2=0;
        for(int i=1;i<=m1;i++){
            int a,b;
            cin>>a>>b;
            g1[a].push_back(b);
            g1[b].push_back(a);
        }
        for(int i=1;i<=m2;i++){
            int a,b;
            cin>>a>>b;
            g2[a].push_back(b);
            g2[b].push_back(a);
        }
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                set<int> s;
                dfs(i,vis,g2,s);
                int add=0;
                for(int v:s){
                    for(int u:g1[v]){
                        if(s.find(u)==s.end())
                            ans2++;
                    }
                    if(!vis1[v])
                        dfs1(v,vis1,g1,s),add++;
                }
                ans1+=add-1;
            }
        }
        cout<<ans1+(ans2)/2<<endl;
    }
}
