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
    string s, t;
    cin >> s >> t;
    int a = 1, b = 0, temp = -1;
    bool down = false;
    while (a < n)
    {
        if (s[a] == t[b])
        {
            a++, b++;
        }
        else if (s[a] == '1' && t[b] == '0')
        {
            temp = a - 1;
            down = true;
            break;
        }
        else
        {
            temp = a;
            a++, b++;
        }
    }
    string ans = "";
    if (temp != -1)
    {
        for (int i = 0; i <= temp; ++i)
        {
            ans += s[i];
        }
        for (int i = temp; i < n; ++i)
        {
            ans += t[i];
        }
        cout << ans << endl;
    }
    else
    {
        ans += s[0];
        for (int i = 0; i < n; ++i)
        {
            ans += t[i];
        }
        cout << ans << endl;
    }
    int tempi = 1;
    bool tempii = false, y = false;
    for (int i = 0; i < n; ++i)
    {
        if (ans[i] != s[i])
        {
            y = true;
            for (int j = i - 1; j >= 0; --j)
            {
                if (s[j] == t[j - 1])
                    tempi++;
                else
                {
                    tempii = true;
                    break;
                }
            }
        }
        if (tempii)
            break;
    }
    if (!y)
    {
        for (int j = n - 1; j >= 0; --j)
        {
            if (s[j] == t[j - 1])
                tempi++;
            else
            {
                tempii = true;
                break;
            }
        }
    }
    cout << tempi << endl;
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
