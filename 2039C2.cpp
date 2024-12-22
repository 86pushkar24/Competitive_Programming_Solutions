#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
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
            continue;;
        }
        int ans = ((m - x) / x);
        if (m - x >= x)
            ans--;
        for (int y = 1; y <= min(m, x); y++)
        {
            int xr = (x ^ y);
            if (xr <= (m - x) && xr >= x && xr % x == 0)
                continue;
            if (xr % x == 0 || xr % y == 0)
                ans++;
        }
        for (int y = max(x + 1, (m - (2 * x))); y <= m; y++)
        {
            int xr = (x ^ y);
            if (x <= xr && xr <= (m - x) && xr % x == 0)
                continue;
            if (xr % y == 0 || xr % x == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}