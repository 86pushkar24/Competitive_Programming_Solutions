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
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int win = 0;
    for (int i = 0; i < k; i++)
    {
        win += h[i];
    }
    int minh = win;
    int ans = 0;
    for (int i = k; i < n; i++)
    {
        win += h[i] - h[i - k];
        if (win < minh)
        {
            minh = win;
            ans = i - k + 1;
        }
    }
    cout << ans + 1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
