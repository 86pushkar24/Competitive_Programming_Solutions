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
#define smv(arr) accumulate(aint(arr), 0LL)
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
// bool isPrime(int n) { if (n <= 1) return 0; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return 0; } return 1; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
// void push(){
//     int n,k;
//     ci n>>k;
//     vi v0(n);
//     for0(i,n)ci v0[i];
//     vi vid(n);
//     for0(i,n)vid[i]=i;
//     sort(aint(vid),[&](int i,int j){return v0[i]>v0[j];});
//     int ans(0);
//     for0(l,n){
//         vi v1;
//         for(int i:vid){
//             if(i!=l)v1.pb(i);
//             if(sz(v1)==k)break;
//         }
//         if(sz(v1)<k)continue;  
//         int sm(0);
//         for(int i:v1)sm+=v0[i];
//         if(l==0)ans=max(ans,sm+v0[l]);
//         else if(l==n-1)ans=max(ans,sm+v0[l]);
//         else if(k>=2){
//             bool cl=false,cr=false;
//             for(int i:v1){
//                 if(i<l)cl=1;
//                 if(i>l)cr=1;
//             }
//             if(cl&&cr)ans=max(ans,sm+v0[l]);
//             else if(!cl){
//                 int lmx=*max_element(v0.bg,v0.bg+l);
//                 int mn=1e18;
//                 int mid=-1;
//                 for(int i:v1){
//                     if(v0[i]<mn){
//                         mn=v0[i];
//                         mid=i;
//                     }
//                 }
//                 if(lmx>mn){
//                     int nsm=sm-mn+lmx;
//                     ans=max(ans,nsm+v0[l]);
//                 }
//             }
//             else if(!cr){
//                 int rmx=*max_element(v0.bg+l+1,v0.nd);
//                 int mn=1e18;
//                 int mid=-1;
//                 for(int i:v1){
//                     if(v0[i]<mn){
//                         mn=v0[i];
//                         mid=i;
//                     }
//                 }
//                 if(rmx>mn){
//                     int nsm=sm-mn+rmx;
//                     ans=max(ans,nsm+v0[l]);
//                 }
//             }
//         }
//         else continue;
//     }
//     cou(ans)
// }
void push(){
    int n,k;
    ci n>>k;
    int v[n];
    for0(i,n)ci v[i];
    if(k==1){
        int ans=0;
        fl(1,n-1)ans=max(ans,v[i]+max(v[0],v[n-1]));
        ans=max(ans,v[0]+v[n-1]);
        cou(ans)
    }
    else{
        sort(v,v+n);
        int ans=0;
        rfl(n-1,n-1-k)
        ans+=v[i];
        cou(ans)
    }
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
