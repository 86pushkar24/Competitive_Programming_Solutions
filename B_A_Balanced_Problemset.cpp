#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int x, n;
    cin >> x >> n;
    int q = x / n;
    set<int> sets;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            sets.insert(i);
            sets.insert(x / i);
        }
    }
    auto iter = sets.lower_bound(q);
    if (*iter > q)
    {
        iter--;
    }
    cout << *iter << endl;
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
