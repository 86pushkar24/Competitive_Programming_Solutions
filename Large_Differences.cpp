// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int insm(0);
    for (int i = 0; i < n-1; ++i) insm += abs(a[i] - a[i+1]);
    auto fn = [&](int idx, int val)
    {
        int del = 0;
        if (idx > 0) del += abs(val - a[idx-1]) - abs(a[idx] - a[idx-1]);
        if (idx < n-1) del += abs(val - a[idx+1]) - abs(a[idx] - a[idx+1]);
        return del;
    };
    int maxx = insm;
    for (int i = 0; i < n; ++i)
    {
        maxx = max(maxx, insm + fn(i, 1));
        maxx = max(maxx, insm + fn(i, k));
    }
    cout << maxx << endl;

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
