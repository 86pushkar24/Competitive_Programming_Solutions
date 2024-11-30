// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define endl '\n'
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
using namespace std;

void push()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];    
    int fav = a[f - 1];
    vector<int> srt = a;
    sort(srt.begin(), srt.end(), greater<int>());
    int cnt(0);
    for (int i = 0; i < k; ++i)
    {
        if (srt[i] == fav)
        {
            ++cnt;
        }
    }
    int tot = count(a.begin(), a.end(), fav);
    if (cnt == tot)cout << "YES" << endl;
    else if (cnt == 0) cout << "NO" << endl;
    else cout << "MAYBE" << endl;
}

signed main()
{
    auto begin = chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        push();
    }

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
    return 0;
}
