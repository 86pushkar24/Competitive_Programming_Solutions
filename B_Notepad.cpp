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
    string str;
    cin >> str;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string p = "";
        p += str[i];
        p += str[i + 1];
        if (str[i] == str[i + 1] and str[i] == str[i + 2])
        {
            i++;
        }
        mp[p]++;
    }
    int flag = 0;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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