#include <bits/stdc++.h>
using namespace std;;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int m;
        cin >> x >> m;
        int ans = 0;
        m = min(m, (int)2 * x);
        for (int y = 1; y <= m; y++)
        {
            int xr = (x ^ y);
            if (!xr)
                continue;
            if (x % xr == 0 || y % xr == 0)
            {
                ans++;
            }
        }
        cout << ans << '\n';
    }
}