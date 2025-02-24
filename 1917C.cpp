#include <bits/stdc++.h>
using namespace std;

long long pwr(long long a, long long b, long long mod = 0)
{
    long long result = 1;
    if (mod == 0)
    {
        while (b)
        {
            if (b & 1)
                result *= a;
            a *= a;
            b = b >> 1;
        }
    }
    else
    {
        while (b)
        {
            if (b & 1)
            {
                result *= a;
                result = result % mod;
            }
            a *= a;
            a = a % mod;
            b = b >> 1;
        }
    }
    return result;
}
void solve()
{
    long long n, m, k, d, c = 0;
    cin >> n >> k >> d;
    long long arr[n], a[k], a1[n];
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> arr[i];
        a1[i] = arr[i];
        if (a1[i] == 1 + i)
        {
            c++;
        }
    }
    long long mx = c + (d - 1) / 2;
    for (int i = 0; i < k; i++)
    {

        cin >> a[i];
    }
    for (int j = 0; j < int(min(n + 1); j++))
    {
        long long c = 0;
        for (int i = 0; i < a[j % k]; i++)
        {
            /* code */
            a1[i]++;
            if (a1[i] == i + 1)
            {
                c++;
            }
        }
        for (int i = a[j % k]; i < n; i++)
        {
            /* code */
            if (a1[i] == 1 + i)
            {
                c++;
            }
        }
        if ((d - j - 2) >= 0)
        {
            mx = max(mx, c + (d - j - 2) / 2);
        }
    }
    cout << mx << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}