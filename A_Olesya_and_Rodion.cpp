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
    int x, y;
    cin >> x >> y;
    if (y == 10)
    {
        if (x == 1)
        {
            cout << -1;
        }
        else
        {
            x--;
            while (x--)
            {
                cout << 9;
            }
            cout << 0;
        }
    }
    else
    {
        while (x--)
        {
            cout << y;
        }
    }
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
