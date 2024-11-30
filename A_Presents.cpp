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
    int a[n], res[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        res[a[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
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
