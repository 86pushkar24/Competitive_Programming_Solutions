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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<pair<int, int> > inv;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            inv.push_back({a[i] - a[i + 1], i + 2});
        }
    }

    sort(inv.begin(), inv.end());

    int idx = 0;

    for (int i = 1; i <= n; i++)
    {
        if (idx == inv.size())
            cout << 1 << " ";
        else if (i < inv[idx].first)
            cout << 1 << " ";
        else
            cout << inv[idx++].second << " ";
    }

    cout << endl;
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
