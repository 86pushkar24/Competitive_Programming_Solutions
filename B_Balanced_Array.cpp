// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n;
    cin >> n;
    if ((n / 2) & 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    for (int i = 1; i <= n; i += 2)
    {
        if (i == n - 1) cout << i + n / 2 << "\n";
        else cout << i << " ";
    }
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
