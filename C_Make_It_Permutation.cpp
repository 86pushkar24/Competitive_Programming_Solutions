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
    int n, c, d, ans = 0;
    cin >> n >> c >> d;
    int a[n];                     
    for (int i = 0; i < (n); i++) cin >> a[i];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int rem = 0;
    vector<int> v;
    for (auto it : mp)
    {
        rem += (it.second) - 1;
        v.push_back(it.first);
    }
    ans += rem * c;
    sort(v.begin(), v.end());
    int s = v.size();
    int m = (s * c) + d;
    for (int i = s - 1; i >= 0; i--)
    {
        m = min(m, ((s - 1 - i) * c) + ((v[i] - i - 1) * d));
    }
    ans += m;
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
