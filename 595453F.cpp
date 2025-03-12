#include "bits/stdc++.h"
using namespace std;

using i64 = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

struct Fenwick
{
    vector<i64> tree;
    int n;
    Fenwick(int _n) : n(_n), tree(_n + 1, 0) {}
    void update(int idx, i64 val)
    {
        while (idx <= n)
        {
            tree[idx] = (tree[idx] + val) % 998244353;
            idx += idx & -idx;
        }
    }
    i64 query(int idx)
    {
        i64 sum = 0;
        while (idx > 0)
        {
            sum = (sum + tree[idx]) % 998244353;
            idx -= idx & -idx;
        }
        return sum;
    }
};

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<i64> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<i64> unique_vals(a.begin(), a.end());
        vector<i64> sorted_unique(unique_vals.begin(), unique_vals.end());
        int m = sorted_unique.size();
        map<i64, int> rank;
        for (int i = 0; i < m; i++)
        {
            rank[sorted_unique[i]] = i + 1;
        }
        Fenwick ft(m);
        i64 total = 0;
        for (int i = 0; i < n; i++)
        {
            int r = rank[a[i]];
            i64 sum = ft.query(r - 1);
            i64 dp = (a[i] % 998244353 * (sum + 1) % 998244353) % 998244353;
            total = (total + dp) % 998244353;
            ft.update(r, dp);
        }
        cout << total << '\n';
    }
}