// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

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
    int rem = n % 60;
    if (n >= 60)
    {
        if (rem <= 9)
        {
            cout << "22:0" << rem << endl;
        }
        else
        {
            cout << "22:" << rem << endl;
        }
    }
    else
    {
        if (rem <= 9)
        {
            cout << "21:0" << rem << endl;
        }
        else
        {
            cout << "21:" << rem << endl;
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
