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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 2;
    if (s[0] == s[2])
    {
        cnt1 -= 1;
    }
    for (int i = 3; i < n; i++)
    {
        // cout<<" i = "<<i<<"\n";
        if (s[i] == s[i - 2])
        {
            continue;
        }
        else if (i + 1 < n && (s[i] == s[i - 2] && s[i + 1] == s[i - 1]))
        {
            continue;
        }
        else
        {
            // cout<<i<<" = i\n";
            cnt1++;
        }
    }
    cout << cnt1 << endl;
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
