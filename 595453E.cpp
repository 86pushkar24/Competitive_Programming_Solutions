#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

const int MOD = 998244353;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<i64> f(n + 1, 0);
        vector<i64> stack;
        f[0] = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'B')
            {
                if (i == 0 || s[i - 1] == 'B')
                {
                    f[i + 1] = (2 * f[i]) % MOD;
                }
                else
                { // prev is 'A'
                    f[i + 1] = (f[i] + stack.back()) % MOD;
                }
            }
            else
            { // s[i] == 'A'
                if (i == 0 || s[i - 1] != 'A')
                {
                    stack.push_back(f[i]);
                    f[i + 1] = (2 * f[i]) % MOD;
                }
                else
                {
                    f[i + 1] = (f[i] + stack.back()) % MOD;
                }
            }
            if (i == 0)
            {
                f[1] = 1;
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            cout << f[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}