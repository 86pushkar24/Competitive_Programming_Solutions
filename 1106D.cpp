#include<bits/stdc++.h>
using namespace std;

void dfs(priority_queue<int, vector<int>, greater<int>> &pq, vector<int> v[], bool visited[], int node) {
    cout<<node<<" ";
    for(int i=0; i<v[node].size(); i++)
        if(!visited[v[node][i]]) {
            pq.push(v[node][i]);
            visited[v[node][i]] = true;
        }
    while(!pq.empty()) {
        int temp = pq.top();
        pq.pop();
        dfs(pq, v, visited, temp);
    }
}

int main() {
    int n, m, k, j;
    cin>>n>>m;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v[n+1];
    bool visited[n+1] = {0};
    while(m--) {
        cin>>j>>k;
        v[j].push_back(k);
        v[k].push_back(j);
    }
    visited[1] = true;
    dfs(pq, v, visited, 1);
    return 0;
}
