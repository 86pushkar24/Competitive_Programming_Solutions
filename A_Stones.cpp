#include "bits/stdc++.h"
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int p = a + b + c;
        while (b >= 1 && c >= 2)
        {
            c = c - 2;
            b = b - 1;
        }
        while (a >= 1 && b >= 2)
        {
            b = b - 2;
            a--;
        }
        int f = a + b + c;
        int ans = p - f;
        cout << ans << endl;
    }
    return 0;
}
