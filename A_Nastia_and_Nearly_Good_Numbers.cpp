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
    int a, b;
    cin >> a >> b;
    if (b == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        ;
        if (b != 2)
            cout << a << " " << a * (b - 1) << " " << a * b << endl;
        else
            cout << a << " " << (2 * b - 1) * a << " " << a * b * 2 << endl;
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
