
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define vi vector<int>
#define vpii vector<pair<int, int>>

void color(int node, int parent, vector<vector<int>> &adj, vi &v0, bool col)
{
    for (auto &child : adj[node])
    {
        if (child == parent)
            continue;
        v0[child] = !col;
        color(child, node, adj, v0, !col);
    }
}

void solve()
{
    int n;
    cin >> n;
    vpii vp(n);
    vi v0(n);
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; ++i)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        p.first--;
        p.second--;
        adj[p.first].pb(p.second);
        adj[p.second].pb(p.first);
    }

    color(0, -1, adj, v0, 0);

    int blue = 0;
    int red = 0;
    for (auto &i : v0)
    {
        if (i == 1)
            red++;
        else
            blue++;
    }
    int ans = 1LL * blue * red;
    cout << ans - n + 1 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    while (T--)
    {
        solve();
    }
    return 0;
}
