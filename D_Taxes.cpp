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
    bool ok = 0, ok2 = 0;
    for (int a = 2; a * a <= n; a++)
        if (!(n % a))
        {
            ok = 1;
            break;
        }
    for (int a = 2; a * a <= n - 2; a++)
        if (!((n - 2) % a))
        {
            ok2 = 1;
            break;
        }
    cout << (ok ? (ok2 && n % 2 ? 3 : 2) : 1);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
