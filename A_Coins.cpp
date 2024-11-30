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
    long long k, n;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (k % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if (n < k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
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
