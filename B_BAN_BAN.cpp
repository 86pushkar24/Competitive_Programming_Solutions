// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    cout << (n + 1) / 2 << '\n';
    if (n % 2 == 0)
    {
        int m = n;
        n = 3 * n;
        int k = 2;
        for (int i = 1; i <= m / 2; i++)
        {
            cout << n << ' ' << k << '\n';
            n = n - 3;
            k = k + 3;
        }
    }
    else
    {
        int m = n;
        n = 3 * n;
        int k = 2;
        for (int i = 1; i <= m / 2; i++)
        {
            cout << n << ' ' << k << '\n';
            n = n - 3;
            k = k + 3;
        }
        cout << n << ' ' << n - 1 << '\n';
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
