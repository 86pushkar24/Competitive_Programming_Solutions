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
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == 'H') || (s[i] == 'Q') || (s[i] == '9'))
        {
            cout << "YES";
            flag = 1;
            break;
        }
    }
    if (flag != 1)
        cout << "NO";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
