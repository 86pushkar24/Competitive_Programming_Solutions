// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define repn(i, e) for (int i = 0; i < e; i++)
#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = __INT_MAX__;
    for (char c = 'a'; c <= 'z'; c++)
    {
        vector<int> v;
        repn(i, n)
        {
            if (s[i] != c)
                v.push_back(i);
        }
        if (v.empty())
        {
            cout << "0" << endl;
            return;
        }
        int cnt = 1, mx = 0;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1] + 1)
                cnt++;
            else
            {
                mx = max(mx, cnt);
                cnt = 1;
            }
        }
        mx = max(mx, cnt);
        int op = 0;
        while (mx != 0)
        {
            mx /= 2;
            op++;
        }
        ans = min(ans, op);
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
