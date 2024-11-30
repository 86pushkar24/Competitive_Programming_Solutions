// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
// const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n; cin >> n;
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    map <int, int> mp;
    const int mod = 998244353;
    mp[0] = 1;
    for (auto x : a){
        map <int, int> nmp;
        for (auto [y, z] : mp){
            nmp[y + x] += z;
            nmp[y + x] %= mod;
            nmp[abs(y + x)] += z;
            nmp[abs(y + x)] %= mod;
        }
        mp.clear();
        int mn = INF, mx = -INF;
 
        for (auto [x, y] : nmp){
            mn = min(mn, x);
            mx = max(mx, x);
        }
 
        for (auto [x, y] : nmp){
            if (x == mn || x == mx){
                mp[x] = y;
            }
        }
    }
    int ans = 0;
    int mx = 0;
    for (auto [x, y] : mp){
        mx = max(mx, x);
    }
 
    for (auto [x, y] : mp){
        if (x == mx){
            ans = y;
        }
    }
    cout << ans << endl;
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
