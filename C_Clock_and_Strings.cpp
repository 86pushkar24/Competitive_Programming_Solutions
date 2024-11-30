// @prefix cpp
// @description

#include <stdcpp.h>
// #include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int a, b, c, d;
        cin >> a >> b >> c >> d;

        int count = 0;
        for (int i = min(a, b); i <= max(a, b); ++i) {
            if (c == i || d == i) {
                count++;
            }
        }

        if (count == 2 || count == 0)
            cout << "NO\n";
        else
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
