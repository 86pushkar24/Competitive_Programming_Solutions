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
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    // ans.push_back(n);
    for (int i = n; i >= m; i--) ans.push_back(i);
    for (int i = m + 1; i < n; i++) ans.push_back(i);
    cout << ans.size();
    cout << endl;
    for (auto &i : ans)
        cout << i << " ";
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
