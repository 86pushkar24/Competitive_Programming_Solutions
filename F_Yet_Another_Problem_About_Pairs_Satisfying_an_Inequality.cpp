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
    vector<int> answer(n), vis(n);
    for (auto &i : answer)
        cin >> i;

    vector<int> prefix(n + 5);
    for (int i = 0; i < n; i++)
    {
        if (answer[i] <= i)
        {
            prefix[answer[i]]++;
            vis[i] = 1;
        }
    }
    for (int i = n - 2; i >= 0; i--)
        prefix[i] += prefix[i + 1];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            ans += prefix[i + 2];
    }

    cout << ans << endl;
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
