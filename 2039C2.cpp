#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    cin >> t;
    while (t--){
        int x, m;
        cin >> x >> m;
        if (x >= m)
        {
            int ans = 0;
            for (int y = 1; y <= m; y++)
            {
                int xr = (x ^ y);
                if (xr % x == 0 || xr % y == 0)
                    ans++;
            }
            cout << ans << endl;
            continue;
        }
        int ans = ((m - x) / x);
        for (int y = 1; y <= min((m - x), x - 1); y++)
        {
            int xr = (x ^ y);
            if (xr % x == 0 || xr % y == 0)
                ans++;
        }
        for (int y = (m - x) + 1; y <= m; y++)
        {
            int xr = (x ^ y);
            if (xr % x == 0 || xr % y == 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}