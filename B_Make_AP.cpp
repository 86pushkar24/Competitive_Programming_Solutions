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
    int a, b, c;
    cin >> a >> b >> c;
    if (((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) || ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) || ((2 * b - a) % c == 0) && (2 * b - a) / c > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
