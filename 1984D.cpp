/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
using namespace std;
using namespace __gnu_pbds;

// Macros
#define int long long
#define endl '\n'
#define for0(i,n)for(int i=0;i<n;++i)
#define for1(i,n)for(int i=1;i<=n;++i)
#define fl(a,b)for(int i=a;i<(b);++i)
#define rfl(a,b)for(int i=a;i>=(b);--i)

#define lbound(v, x) lower_bound(v.begin(),v.end(),x)-v.begin()
#define ubound(v, x) upper_bound(v.begin(),v.end(),x)-v.begin()
#define mne(v) *min_element(v.begin(),v.end())
#define mxe(v) *max_element(v.begin(),v.end())

#define yes cout<<"YES"<<endl;
#define no cout << "NO" << endl;
#define cy(x){if(x)yes else no}

#define aint(v) v.begin(),v.end()
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define di deque<int>
#define que queue<int>
// #define si set<int>
// #define mii map<int, int>
#define mts multiset<int>
#define mii fast_map<int, int>
#define si fast_set <int>

#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second
#define ins insert
#define mp make_pair

// Input/Output Macros
#define cin(a) int n;cin>>n;vi a(n);for0(i,n){cin>>a[i];}
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define ci cin >>
#define sz(c) c.size()

// Vector Operations
#define sortv(v) sort(aint(v))
#define rev(v) reverse(aint(v))
#define sumv(arr) accumulate(aint(arr), 0LL)
#define Ceil(a, b) ((a + b - 1) / b)

// Type Aliases for Nested Containers
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvi = vector<vector<int>>;
using vvp = vector<vector<pair<int, int>>>;

// Constants
const int maxn = 4e5 + 5;
const int inf = 1e18;
const int mod = 1e9 + 7;


// Custom Hash Function (for preventing collisions in hashing)
struct custom_hash{
    static uint64_t splitmix64(uint64_t x){x += 0x9e3779b97f4a7c15;x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;x = (x ^ (x >> 27)) * 0x94d049bb133111eb;return x ^ (x >> 31);}
    size_t operator()(uint64_t x) const{static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();return splitmix64(x + FIXED_RANDOM);}};
template <typename K, typename V> using fast_map = gp_hash_table<K, V, custom_hash>;
template <typename K>  using fast_set = gp_hash_table<K, null_type, custom_hash>;
// Utility Functions (Commented for Optional Use)
// int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
void push() {
    int ans = 0;
    if (i != 0) continue;
    si p;
    vi g;
    
    for0(j, sz(u), j += i) {
        int mn = n, mx = 0;
        fl(k, j, j + i) {
            mn = min(mn, u[k].fi);
            mx = max(mx, u[k].se);
        }
        p.ins(s.substr(mn, mx - mn));
        g.pb(mn);
        g.pb(mx);
    }
    
    int b1 = g[0], b2 = n - g.back(), b3 = n;
    for0(j, sz(g) - 2, j += 2) {
        b1 = min(b1, g[j + 2] - g[j + 1]);
        b2 = min(b2, g[j + 2] - g[j + 1]);
        b3 = min(b3, g[j + 2] - g[j + 1]);
    }
    
    if (is_sorted(aint(g)) && sz(p) == 1) {
        if (b3 >= b1 + b2)
            ans += (b1 + 1) * (b2 + 1);
        else {
            for0(j, b1 + 1) {
                if (j <= b3)
                    ans += min(b2, b3 - j);
            }
        }
        
        if (i > 1) return;
        
        string l = s.substr(u[0].fi, u[0].se - u[0].fi);
        for1(j, sz(l) - 1) {
            if (sz(l) % j != 0) continue;
            si temp;
            for0(k, sz(l), k += j) {
                temp.ins(l.substr(k, j));
            }
            if (sz(temp) == 1) ans++;
        }
    }
    
    for1(j, sz(c) - 1) {
        if (sz(c) % j != 0) continue;
        si temp;
        for0(k, sz(c), k += j) {
            temp.ins(c.substr(k, j));
        }
        if (sz(temp) == 1) {
            int b = 0;
            string d = *temp.bg;
            for (auto x : m) {
                string l;
                if (sz(x.fi) % sz(d) != 0) continue;
                for0(i, sz(x.fi) / sz(d)) l += d;
                if (l == x.fi) b++;
            }
            if (b == sz(m)) ans++;
        }
    }
    
    cou(ans);
}


signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = std::chrono::high_resolution_clock::now();

    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
