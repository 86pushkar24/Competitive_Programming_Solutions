#include "bits/stdc++.h"
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> m >> n;
        vector<vector<int>> a(m + 1, vector<int>(n + 1));
        vector<int> maxv(n + 1, 0);
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                maxv[j] = max(maxv[j], a[i][j]);
            }
        if (m <= n - 1)
        {
            int res = 1e9;
            for (int i = 1; i <= n; i++)
                res = min(res, maxv[i]);
            cout << res << '\n';
            continue;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
            {
                int res = 1e9;
                for (int k = 1; k <= n; k++)
                    if (k != i && k != j)
                        res = min(res, maxv[k]);
                int t = 0;
                for (int k = 1; k <= m; k++)
                    t = max(t, min(a[k][i], a[k][j]));
                res = min(res, t);
                ans = max(ans, res);
            }
        cout << ans << '\n';
    }
}