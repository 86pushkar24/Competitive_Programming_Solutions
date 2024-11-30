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
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    string s1, s2;
    map<char, int> mp, mp1, mp2;
    vector<int> v(n + 1), v1(n + 1);
    for (int i = 0; i < n; i++)
    
    {
        mp[s[i]]++;
        v[i] = mp.size();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        mp1[s[i]]++;
        v1[i] = mp1.size();
    }
    for (int i = 0; i < n; i++)
    {
        int s = v[i] + v1[i + 1];
        ans = max(ans, s);
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
