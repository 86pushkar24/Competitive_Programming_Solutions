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
    int n;cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)cin >> arr[i];
    float total = 0;
    for (int i = 0; i < n; i++) total += ((float)arr[i] / n);
    cout << fixed << setprecision(12) << total;
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
