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
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int l = 1, r = n;
    while (l <= r)
    {
        if (a.size() % 2 == 0)
        {
            a.push_back(r);
            r -= 1;
        }
        else
        {
            a.push_back(l);
            l += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " \n"[i == n - 1];
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
