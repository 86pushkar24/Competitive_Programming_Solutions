// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;cin >> n;
    vector<int> org(n),tgt(n);
    for (auto &it : org) cin >> it;
    for (auto &it : tgt) cin >> it;
    int m; cin >> m;
    vector<int> mdf(m);
    map<int, int> mpp;
    for (auto &it : mdf) {
        cin >> it;
        mpp[it]++;
    }
    int t(0);
    for (int i = 0; i < n; i++) {
        if (mdf[m - 1] == tgt[i]) t = 1;
        if (org[i] != tgt[i]) mpp[tgt[i]]--;
    }
    for (auto &it : mpp) {
        if (it.second<0) t=0;
    }
    (t) ? cout << "YES" << endl : cout << "NO" << endl;
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        push();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
