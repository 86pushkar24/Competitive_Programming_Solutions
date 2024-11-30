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
    int n;
    cin >> n;
    int arr[n];
    vector<pair<int, int>> val_i;
    vector<int> pos[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pos[arr[i]].push_back(i);
    }
    int ans = 0;
    for (int i = n; i; i--)
    {
        int z = 0;
        for (auto j : pos[i])
        {
            if (j + 1 < n && arr[j + 1] < arr[j])
                z = 1;
        }
        ans += z;
        if (z)
        {
            for (int j : pos[i])
                arr[j] = 0;
        }
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
