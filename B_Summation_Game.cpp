#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, k1;
        cin >> n >> k >> k1;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < k1; i++)
        {
            sum -= 2 * a[i];
        }
        int mx = sum;
        int ind = k1;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
            if (ind < n)
            {
                sum -= 2 * a[ind];
            }
            ind++;
            mx = max(mx, sum);
        }
        cout << mx << endl;
    }
    return 0;
}
