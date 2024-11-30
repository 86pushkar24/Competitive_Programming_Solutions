// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define S second
#define F first
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    int arr[n];
    set<int> x;
    map<int, vector<int>> pos;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        x.insert(arr[i]);
        pos[arr[i]].pb(i);
    }
    for (auto a : pos)
        pos[a.F].pb(n);

    int ans = INT_MAX;
    for (auto x : pos)
    {
        int last = -1, count = 0;
        for (auto d : x.S)
        {
            if ((last + 1) != d)
                count++;
            last = d;
        }
        ans = min(ans, count);
    }
    cout << ans << endl;
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
