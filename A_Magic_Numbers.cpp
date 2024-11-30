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
    int c = 0, flag = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size();)
    {
        if (s[i] == '1')
        {
            i++;
            if (s[i] == '4')
            {
                i++;
                if (s[i] == '4')
                    i++;
            }
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";
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
