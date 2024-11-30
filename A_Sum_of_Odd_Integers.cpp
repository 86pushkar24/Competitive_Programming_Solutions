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
    int n, k;
    cin >> n >> k;
    int x = sqrt(n);
    int rem = n - x * x;
    if(k > x)
    {
        cout << "NO" << endl;
        return;
    }
    if(rem == 0)
    {
        if((x - k) % 2 == 0)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    else
    {
        if(rem & 1 and (x - k) % 2 == 1)
            cout << "YES" << endl;
        else if(rem % 2 == 0 and (x - k) % 2 == 0)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
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
