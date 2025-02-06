#include"bits/stdc++.h"
using namespace std;

const int N=2e5+5;
vector<int> adj[N],path,sq;
bool vis[N];
void bfs(int start){
    deque<int> q;
    q.push(start);
    vis[start]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        path.push_back(node);
        for(int it :adj[node]){
            if(!vis[it]){
                vis[it]=true;
                q.push(it);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    sq.resize(n);
    for(int i=0;i<n;++i)cin>>sq[i];
    bfs(1);
    cout<<(path==sq?"Yes":"No")<<endl;
    return 0;
}
