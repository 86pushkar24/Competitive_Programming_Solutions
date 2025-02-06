#include "bits/stdc++.h"
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<vector<int>> g(n + 1);
        for (int i = 0; i < n - 1; i++){
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }

        vector<int> sz(n + 1);
        auto dfs = [&](auto &&dfs, int u, int fa) -> void
        {
            bool flag = false;
            for (auto j : g[u])
            {
                if (j == fa)
                    continue;
                flag = true;
                dfs(dfs, j, u);
                sz[u] += sz[j];
            }
            if (!flag)
                sz[u] = 1;
        };

        dfs(dfs, 1, -1);

        int q;
        cin >> q;
        while (q--){
            int a, b;
            cin >> a >> b;
            cout << 1LL * sz[a] * sz[b] << endl;
        }
    }
}