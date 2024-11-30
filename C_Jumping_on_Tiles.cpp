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
    string s;
    cin >> s;
    int n;
    int jumps = 0;
    map<char, int> h;
    map<char, vector<int> > ma;
    n = s.length();
    int k = 0;
    for (auto &i : s)
    {
        ma[i].push_back(k + 1);
        k++;
    }
    vector<int> v;
    int flag = 0;
    if (s[0] <= s[n - 1])
    {
        for (auto &i : ma)
        {
            if (i.first == s[0])
            {
                flag = 1;
            }

            if (flag == 1)
            {
                for (auto &jj : i.second)
                {
                    v.push_back(jj);
                    jumps++;
                }
                if (i.first == s[n - 1])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    else
    {
        for (auto i = ma.rbegin(); i != ma.rend(); ++i)
        {
            if (i->first == s[0])
            {
                flag = 1;
            }

            if (flag == 1)
            {
                for (auto &jj : i->second)
                {
                    v.push_back(jj);
                    jumps++;
                }
                if (i->first == s[n - 1])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    cout << abs(s[n - 1] - s[0]) << " " << jumps;
    cout << endl;
    for (auto &i : v)
        cout << i << " ";
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
