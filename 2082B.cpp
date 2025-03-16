#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        int n1 = n, m1 = m;
        int x1 = x;
        while (x1 > 0)
        {
            int px = x1;
            if (n == 0 && m == 0)
                break;
            if (m)
            {
                x1 = (x1 + 1) / 2;
                m--;
            }
            else
            {
                x1 = x1 / 2;
                n--;
            }
            if (px == x1)
                m = 0;
        }
        cout << x1 << " ";
        x1 = x, n = n1, m = m1;
        while (x1 > 0)
        {
            int px = x1;
            if (n == 0 && m == 0)
                break;

            if (n)
            {
                x1 = x1 / 2;
                n--;
            }
            else
            {
                x1 = (x1 + 1) / 2;
                m--;
            }

            if (px == x1)
                m = 0;
        }
        cout << x1 << endl;
    }
}
