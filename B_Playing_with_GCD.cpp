// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

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

    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    a.push_back(a[n - 1]);

    vector<int> b(n + 1);

    b[0] = a[0];

    for (int i = 1; i <= n; i++)
    {
        b[i] = lcm(a[i], a[i - 1]);
    }

    int flag = 1;

    for (int i = 1; i <= n; i++)
    {
        if (__gcd(b[i], b[i - 1]) != a[i - 1])
        {
            cout << "NO\n";
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
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
