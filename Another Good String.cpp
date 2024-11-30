#include <stdcpp.h>
// #include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int n, q;
    cin >> n >> q;

    string str;
    cin >> str;

    int curr = 1;
    int ans = 1;
    char pre = str[0];

    for (int i = 1; i < n; i++)
    {
        if (pre == str[i])
        {
            curr++;
            ans = max(ans, curr);
        }
        else
        {
            curr = 1;
            pre = str[i];
        }
    }
    cout << ans << " ";
    char ch;

    while (q--)
    {
        cin >> ch;
        if (ch == pre)
        {
            curr++;
            ans = max(curr, ans);
        }
        else
        {
            curr = 1;
            pre = ch;
        }
        cout << ans << " ";
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        clear();
    }

    return 0;
}

