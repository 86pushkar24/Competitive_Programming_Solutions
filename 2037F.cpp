/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
using namespace std;

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
#define vs = vector<string>;
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define di deque<int>
#define que queue<int>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int>

#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second

// Input/Output Macros
#define cin(a) int n;cin>>n;vi a(n);for0(i,n){cin>>a[i];}
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define ci cin >>
#define sz(c) <int>(c.size())

// Vector Operations
#define sortv(v) sort(aint(v))
#define rev(v) reverse(aint(v))
#define sumv(arr) accumulate(aint(arr), 0LL)
#define Ceil(a, b) ((a + b - 1) / b)
#define ai(o) vi a(n);for0(i,n)ci a[i];

// Type Aliases for Nested Containers
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvi = vector<vector<int>>;
using vvp = vector<vector<pair<int, int>>>;

// Constants
const int maxn = 4e5 + 5;
const int inf = 1e18;
const int mod = 1e9 + 7;

// Pushkar Gupta's Solution Starts Here
bool srch(int t,int n,int m,int k,vi&h,vi&x) {
    vpii vp;
    for0(i,n){
        int k = (h[i] + t - 1) / t;
        if (k > m) continue; 
        int r = m - k;
        int lt = x[i] - r;
        int rt = x[i] + r;
        vp.pb({lt, +1});
        vp.pb({rt + 1, -1});
    }
    sort(vp.begin(), vp.end(), [](pii& a, pii& b) {
        if (a.fi != b.fi) return a.fi < b.fi;
        return a.se < b.se; 
    });
    int ct = 0;
    for (auto& e : vp) {
        ct += e.se;
        if(ct>=k) return true;
    }
    return false;
}

void push() {
    int n,m,k;ci n>>m>>k;
    vi v1(n), v2(n);
    for0(i, n) ci v1[i];
    for0(i, n) ci v2[i];
    int l(1), hg(1e15), ans(-1);
    while (l <= hg) {
        int md = l + (hg - l) / 2;
        if(srch(md, n, m, k, v1, v2)) {
            ans = md;
            hg = md - 1;
        } 
        else l = md + 1;
    }
    cou(ans);
}

signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = std::chrono::high_resolution_clock::now();

    int tc = 1;
    ci tc;

    for1(t, tc) {
        // cout << "Case #" << t << ": ";
        push();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
