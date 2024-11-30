// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define MAX 1000000

vector<int> fact(MAX);
void pre(){
    fact[0] = 1;
    for (int i = 1; i < MAX; ++i) {
        fact[i] = (i * fact[i-1]) % MOD;
    }
}
void push()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int k = n / i;
        int sum = (i-1) + (i-1)*k + k;
        int diff = sum - n;
        int res = (fact[k] * fact[n - k]) % MOD;
        res = (res * (diff + 1)) % MOD;
        cout << res << " ";
    }
    cout << "\n";
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    pre();
    while (tc--)
    {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
