// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define per(i, a, b) for (int i = a; i >= b; i--)
#define rep(i, a, b) for (int i = a; i < b; i++)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c = s[n - 1];
    int cnt = 1;
    string temp2 = "";
    vector<int> vis(n, 0);
    temp2 += s[n - 1];
    vis[n - 1] = 1;
    per(i, n - 2, 0)
    {
        if (s[i] >= c)
        {
            temp2 += s[i];
            vis[i] = 1;
            c = s[i];
        }
    }
    int j = 0;
    rep(i, 0, n)
    {
        if (vis[i])
        {
            s[i] = temp2[j];
            j++;
        }
        if (i > 0 and s[i] < s[i - 1])
        {
            cout << -1 << "\n";
            return;
        }
    }
    c = temp2.back();
    cnt = 1;
    per(i, temp2.length() - 2, 0)
    {
        if (c == temp2[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << temp2.length() - cnt << "\n";
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
