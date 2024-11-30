// @prefix cpp
// @description
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// #include <stdcpp.h>
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define INP(arr, n) for (int i = 0; i < n; i ++) cin >> arr[i]
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
#define cou(a) {cout<<a<<"\n";}

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
int lcm (int a, int b) { return (a*b) / gcd(a, b);}
int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
const int N = 1e6;
// Pushkar Gupta's Solution Start's Here
void push(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    vector<pair<int, int> > p(n);
    for(int i = 0; i < n; i++){
        p[i] = {a[i] - b[i], a[i]};
    }
    sort(p.begin(), p.end());
    {
        vector<pair<int, int> > np;
        int mn = 1e9;
        for(auto [x, y] : p){
            if (y < mn){
                mn = y;
                np.push_back({x, y});
            }
        }
        p.swap(np);
    }
    const int N = 1e6;
    vector<int> f(N + 1);
    for(int i = 1, j = p.size(); i <= N; i++){
        while(j - 1 >= 0 and p[j - 1].second <= i) j--;
        if (j != p.size()){
            auto [a, b] = p[j];
            f[i] = 1 + f[i - a];
        }
    }
    int ans = 0;
    while(m--){
        int x;
        cin >> x;
        if (x > N){
            int cnt = (x - N) / p[0].first;    
            if (x - cnt * p[0].first >= p[0].second) cnt += 1;
            ans += cnt;
            x -= cnt * p[0].first;
        }
        ans += f[x];
    }
    cout << ans*2 << endl;
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
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
