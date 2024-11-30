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

signed main()
{
    string s;
    cin >> s;
    int t = 0, ct = 0, n = 0;
    cin >> t;
    n = s.length();
    int arr[n] = {0};
    for (int a = 1; a < n; a++)
    {
        if (s.at(a) == s.at(a - 1))
            ct++;
        arr[a] = ct;
    }
    while (t--)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        cout << arr[y-1] - arr[x-1] << endl;
    }
}
