#include <bits/stdc++.h>
using namespace std;
void dfs(int v,vector<bool>& vis,vector<vector<int>>& g,set<int>& s){
    vis[v]=1;
    s.insert(v);
    for(int u:g[v]){
        if(!vis[u]) dfs(u,vis,g,s);
    }
}
int main() {
	int tc;
	cin>>tc;
    while(tc--){
        int n,m1,m2;
        cin>>n>>m1>>m2;
        vector<vector<int>> g1(n+1),g2(n+1);
        vector<bool> vis(n+1);
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
                set<int> s,ns;
                dfs(i,vis,g2,s);
                for(int v:s){
                    int add=1;
                    for(int u:g1[v]){
                        if(s.find(u)==s.end()) ans2++;
                        else if(ns.find(u)!=ns.end()) add=0;
                    }
                    ans1+=add;
                    ns.insert(v);
                }
                ans1--;
            }
        }
        cout<<ans1+(ans2)/2<<endl;
    }
}