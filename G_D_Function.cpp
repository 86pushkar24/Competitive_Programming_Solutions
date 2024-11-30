// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES";
#define no cout << "NO";
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define mii map<int, int>
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())

const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

int binpow(int x, int y, int m)
{
    int res = 1;
    x = x % m;
 
    while (y > 0)
    {
        if (y & 1) res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}


/*
    Pushkar 
            Gupta's
                        Solution
                Start's
        Here
*/

int modInverse(int n, int m)
{
    return binpow(n, m - 2, m);
}
 
int sum(int n, int a, int r)
{
    if (n == 0) return 0;
    int rn = binpow(r, n, MOD);
    int rnm1 = (rn - 1 + MOD) % MOD;
    int num = a * rnm1;
    num %= MOD;
    num *= modInverse(r - 1, MOD);
    return num % MOD;
}
 
void push()
{
    int l, r, k;
    cin >> l >> r >> k;
    if (k >= 10)  cout << 0 << endl;
    else
    {
        vi arr = {0, 9, 4, 3, 2, 1};
        vi R = {0, 10, 5, 4, 3, 2};
        k = min(k, 5ll);
        cout << (sum(r, arr[k], R[k]) - sum(l, arr[k], R[k]) + MOD) % MOD << endl;
    }
}

/*
    Pushkar 
            Gupta's
                        Solution
                End's
        Here
*/

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
