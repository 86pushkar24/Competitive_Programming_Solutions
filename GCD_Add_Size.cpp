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
#define mii map<int, int>
#define mts multiset<int>
// #define mii fast_map<int, int>
#define si fast_set <int>

#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second
#define ins insert
// #define mp make_pair

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
const int maxn = 1000000;
const int inf = 200;
const int mod = 1e9 + 7;

// Custom Hash Function (for preventing collisions in hashing)
struct custom_hash{
    static uint64_t splitmix64(uint64_t x){x += 0x9e3779b97f4a7c15;x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;x = (x ^ (x >> 27)) * 0x94d049bb133111eb;return x ^ (x >> 31);}
    size_t operator()(uint64_t x) const{static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();return splitmix64(x + FIXED_RANDOM);}};
template <typename K, typename V> using fast_map = gp_hash_table<K, V, custom_hash>;
template <typename K>  using fast_set = gp_hash_table<K, null_type, custom_hash>;
// Utility Functions (Commented for Optional Use)
int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
void push(){
    int arr[maxn+1];
    int n;
    ci n;
    vi v0(n);
    for0(i,n)ci v0[i];
    auto fn=[](const vi&a)->int {
        int g(0);
        for(auto&it:a)g=gcd(g,it);
        return g;
    };
    int g=fn(v0),y(0);
    mii mp;
    for(auto&it:v0){
        mp[it]++;
        y=max(y,it);
    }
    int res=max(g+n,y+mp[y]);
    if(y<=maxn){
        int m=y;
        fill(arr,arr+m+1,0);
        for(auto&it:v0)
            arr[it]++;
        for(int d=m;d>=1;d--){
            int mult(0);
            for(int j=d;j<=m;j+=d)
                mult+=arr[j];
            res=max(res,mult+d);
        }
        cou(res);
        return;
    }
    vpii vp;
    for(auto&it:mp)vp.pb({it.fi,it.se});
    sort(aint(vp),[](auto &a,auto &b){ return a.fi>b.fi;});
    int k=min((int)sz(vp),40LL);
    vi v1;
    for0(i,k)v1.pb(vp[i].fi);
    if(sz(vp)<=80){
        v1.clear();
        for(auto&it:vp)v1.pb(it.fi);
    }
    si st;
    for(auto&it:v1)st.ins(it);
    for0(i,sz(v1))for(int j=i+1;j<sz(v1);j++)st.ins(gcd(v1[i],v1[j]));
    for(auto it:st){
        int arr(0);
        for(auto&it2:vp)if(it2.fi%it!=1)arr+=it2.se;
        res=max(res,arr+it);
    }
    cou(res);
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
