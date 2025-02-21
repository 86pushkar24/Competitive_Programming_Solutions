#include "bits/stdc++.h"
using namespace std;

// int solve(int n, char *S, char *R){
//     int fs[26] = {0}, fr[26] = {0};
//     for (int i(0); i < n; i++){
//         fs[S[i] - 'a']++;
//         fr[R[i] - 'a']++;
//     }
//     int ans(0);
//     for (int c(0); c < 26; c++)if (fr[c] > fs[c])ans += fr[c] - fs[c];
//     return ans;
// }

// int FIND_X(int A, int B, int C){
//     long long ans(0); 
//     for (int i(0); i < 32; i++){
//         int x = (A >> i) & 1,y = (B >> i) & 1,z = (C >> i) & 1;
//         if (z == 0){
//             if ((x & y) == 1)return -1;
//         }
//         else if ((x & y) != 1)ans |= (1LL << i);
//     }
//     return (int)ans;
// }
const int MAXN = 100000;
vector<int> v1[MAXN + 1],v2;
pair<long long, bool> dfs(int u, int pt){
    long long routes = 0;
    bool chk = (v2[u] == 1); 
    for (int v : v1[u]){
        if (v == pt)continue;
        auto [rt, ra] = dfs(v, u);
        routes += rt; 
        if (childActive)chk = true; 
    }
    if (u != 1 && chk && routes == 0)routes = 1;
    return make_pair(routes, chk);
}

int solve(int n, vector<int> &Passengers, vector<vector<int>> &Edges){
    for (int i = 1; i <= N; i++)v1[i].clear();
    for (auto &edge : Edges){
        int u = edge[0], v = edge[1];
        v1[u].push_back(v);
        v1[v].push_
}

int main() {
    int A = 5, B = 6, C = 7;
    cout << FIND_X(A, B, C) << endl;
    return 0;
}
