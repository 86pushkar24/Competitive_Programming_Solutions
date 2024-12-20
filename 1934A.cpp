#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ans = a[n - 1] - a[0] + a[n - 1] - a[1] + a[n - 2] - a[1] + a[n - 2] - a[0];
        cout << ans << '\n';
    }
}