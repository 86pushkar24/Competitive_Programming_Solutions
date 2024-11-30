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
    map<string, int> m;
    vector<string> ans;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ans.push_back(s);
        m[s]++;
    }

    for (int i = 0; i < n; i++)
    {
        string s = ans[i];
        bool found = true;

        for (int i = 1; i < s.size(); i++)
        {
            string k = string(s.begin(), s.begin() + i);
            string t = string(s.begin() + i, s.end());

            if (m[k] && m[t])
            {
                cout << 1;
                found = false;
                break;
            }
        }
        if (found)
            cout << 0;
    }

    cout << endl;
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
