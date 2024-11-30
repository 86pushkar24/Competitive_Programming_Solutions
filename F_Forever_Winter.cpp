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
    int n, m;
    cin >> n >> m;
    map<int, int> deg;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }
    map<int, int> freq;
    for (auto it : deg)
    {
        freq[it.second]++;
        // cout<<it.first<<" "<<it.second<<"\n";
    }

    int x = -1;
    for (auto it : freq)
        if (it.second == 1)
            x = it.first;

    if (x == -1)
    {
        for (auto it : deg)
            if (it.second != 1)
                x = it.second;
    }
    cout << x << " " << freq[1] / x << "\n";
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
