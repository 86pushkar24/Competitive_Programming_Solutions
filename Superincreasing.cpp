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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> ans;
        k--;
        if (k >= 30)
        {
            cout << "NO" << endl;
            continue;
        }
        int mini = pow(2, k);
        if (x >= mini)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
