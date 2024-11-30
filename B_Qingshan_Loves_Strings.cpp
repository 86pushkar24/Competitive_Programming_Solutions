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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool flags = true;
    bool flagt = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            flags = false;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (t[i] == t[i + 1])
        {
            flagt = false;
        }
    }

    bool ans = true;
    if (flags)
        cout << "Yes" << endl;
    else if (!flags && !flagt)
        cout << "No" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] == t[0] || s[i] == t[m - 1])
                    ans = false;
            }
        }
        if (ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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

    
