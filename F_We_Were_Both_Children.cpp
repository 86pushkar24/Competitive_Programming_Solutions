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
    unordered_map<int, int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k <= n)
        {
            arr[k]++;
        }
    }
    int ans[n + 1] = {0};
    for (auto it : arr)
    {
        for (int j = it.first; j <= n; j += it.first)
        {
            ans[j] += it.second;
        }
    }
    cout << (*max_element(ans + 1, ans + n + 1)) << endl;
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
