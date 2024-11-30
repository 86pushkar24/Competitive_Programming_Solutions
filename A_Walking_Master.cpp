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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (y < b)
    {
        cout << -1 << endl;
    }
    else if (a == x && b == y)
    {
        cout << 0 << endl;
    }
    else
    {
        int count = 0;
        while (b < y)
        {
            a++;
            b++;
            count++;
        }
        if (a < x)
        {
            cout << -1 << endl;
        }
        else
        {
            while (a > x)
            {
                count++;
                a--;
            }
            cout << count << endl;
        }
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
