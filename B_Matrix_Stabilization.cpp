// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

// #define int long long
#define INP(arr, n) for (int a = 0; a < n; a ++) cin >> arr[a]
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int> 
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
int lcm (int a, int b) { return (a*b) / gcd(a, b);}
int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}

// Pushkar Gupta's Solution Start's Here
void push(){
    int n, m;
    cin >> n >> m;
    vector< vi > a(n, vi(m));
    for0(i, n) {
        for0(j, m) {
            cin >> a[i][j];
        }
    }
    for0(i, n) {
        for0(j, m) {
            int val = 0;
            int f = 1; // bigger than all <=, set f=0
            if(i-1 >= 0) { val = max(val, a[i-1][j]); }
            if(j-1 >= 0) { val = max(val, a[i][j-1]); }
            if(i+1 < n) { val = max(val, a[i+1][j]); }
            if(j+1 < m) { val = max(val, a[i][j+1]); }

            if(i-1 >= 0 && a[i][j] <= a[i-1][j]) { f = 0; }
            if(j-1 >= 0 && a[i][j] <= a[i][j-1]) { f = 0; }
            if(i+1 < n && a[i][j] <= a[i+1][j]) { f = 0; }
            if(j+1 < m && a[i][j] <= a[i][j+1]) { f = 0; }
            if(f == 1) {
                a[i][j] = val;
            }
        }
    }
    for0(i, n) {
        for0(j, m) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
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
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
/**
 * 
 * +-----+-----------------+
 * |  n  | Worst Algorithm |
 * +-----+-----------------+
 * | 11  | O(n!), O(n^6)   |
 * | 18  | O(2^n * n^2)    |
 * | 22  | O(2^n * n)      |
 * | 100 | O(n^4)          |
 * | 400 | O(n^3)          |
 * | 2K  | O(n^2 log n)    |
 * | 10K | O(n^2)          |
 * | 1M  | O(n log n)      |
 * +-----+-----------------+
 *
 * Lower Bound: First >=, Upper Bound: First >
 **/
