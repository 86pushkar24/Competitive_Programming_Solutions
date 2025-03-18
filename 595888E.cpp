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
const int maxn =1e6;
const int inf =2*maxn+1;
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

class FenwickTree
{
private:
    vector<int> ft;
    int size;

public:
    FenwickTree(int n) : size(n + 1), ft(n + 1, 0)
    {
    }
    void update(int idx, int val)
    {
        for (; idx < size; idx += idx & -idx)
            ft[idx] += val;
    }
    int query(int idx)
    {
        if (idx < 0)
            return 0;
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx)
            sum += ft[idx];
        return sum;
    }
};

void push(){
    int n,a,b;
    ci n>>a>>b;
    vi v(n);
    for0(i,n)ci v[i];
    vi v1(n+1,0),v2(n+1,0);
    for1(k,n){
        if(v[k-1]<a)v1[k]=v1[k-1]+1;
        else if(v[k-1]>a)v1[k]=v1[k-1]-1;
        else v1[k]=v1[k-1];
    }
    for1(k,n){
        if(v[k-1]<b)v2[k]=v2[k-1]+1;
        else if(v[k-1]>b)v2[k]=v2[k-1]-1;
        else v2[k]=v2[k-1];
    }
    int dm(0),dc(0);
    if(b<a)dm=1;
    else if(b>a)dm=-1;
    if(a<b)dc=1;
    else if(a>b)dc=-1;
    FenwickTree t1(inf);
    FenwickTree t2(inf);
    int ans(0);
    fl(2,n+3){
        int k=i-2;
        if(k>=0 && k<=n)t1.update(v2[k]+maxn,1);
        int lt=0;
        if(k>=0)lt=v1[k]+dm;
        ans+=t1.query(lt-1+maxn);
    }
    rfl(n+2,1){
        int m=i-1;
        if(m>=0 && m<=n)
        t2.update(v2[m]+maxn,1);
        if(i<=n+1){
            int rt=v1[m];
            ans+=t2.query(rt-dc-1+maxn);
        }
    }
    cou(ans)
}

signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = std::chrono::high_resolution_clock::now();

    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
