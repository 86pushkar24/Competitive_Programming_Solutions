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
    int n = 0, m = 0, k = 0, ans = 0, cnt = 0, sum = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(20);
        int p = 0;
        for (int j = i; j < min(i + 124LL, n); j++)
        {
            int x = str[j] - '0';
            if (v[x] == 0)
                p++;
            v[x]++;
            int mx = *max_element(all(v));
            if (mx <= p)
                ans++;
        }
    }
    cout << ans;
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
        cout << endl;
    }
}
