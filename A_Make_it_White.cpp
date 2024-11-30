#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int b1 = -1;
    int bl = -1;

    for (int j = 0; j < n; ++j)
    {
        if (s[j] == 'B')
        {
            if (b1 == -1)
            {
                b1 = j;
            }
            else
            {
                bl = j;
            }
        }
    }

    if (b1 == -1)
    {
        cout << 0 << endl;
    }
    else if (bl == -1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << bl - b1 + 1 << endl;
    }
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
