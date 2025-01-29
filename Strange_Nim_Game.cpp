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
#define vs vector<string>
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
const int maxn = 200001;
const int inf = 1e18;
const int mod = 1e9 + 7;
const int maxn2 = 20;

// Utility Functions (Commented for Optional Use)
// int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
int n,a1[maxn], a2[maxn], segtree[4 * maxn][maxn2], v0[maxn], vf[maxn];
void randi(){
    a1[0] = 0;
    for1(x,maxn-1){
        int mk(0),tp(x);
        vi nxt;
        while (tp > 0){
            int dg = tp % 10;
            tp /= 10;
            if (dg > 0)nxt.pb(a1[x - dg]);
        }
        for (int it : nxt)if (it < maxn2)mk |= (1 << it);
        int g(0);
        while (mk & (1 << g))g++;
        a1[x] = g;
    }
}
void addtn(int k[maxn2], int x){
    rfl(maxn2-1,0){
        if (x == 0)return;
        if ((x >> i) & 1){
            if (!k[i]){
                k[i] = x;
                return;
            }
            x ^= k[i];
        }
    }
}
void milao(int res[maxn2], int lft[maxn2], int rgt[maxn2]){
    for0(i,maxn2)res[i] = lft[i];
    for0(i,maxn2)if (rgt[i])addtn(res, rgt[i]);
}
int postn(int k[maxn2]){
    int res(0);
    for0(i,maxn2)if (k[i])res++;
    return res;
}
void banao(int idx, int lft, int rgt){
    fill(segtree[idx], segtree[idx] + maxn2, 0);
    if (lft == rgt){
        addtn(segtree[idx], vf[lft]);
        return;
    }
    int mid = (lft + rgt) / 2;
    banao(2 * idx, lft, mid);
    banao(2 * idx + 1, mid + 1, rgt);
    milao(segtree[idx], segtree[2 * idx], segtree[2 * idx + 1]);
}
void updt(int idx, int lft, int rgt, int pos, int res){
    if (lft == rgt){
        fill(segtree[idx], segtree[idx] + maxn2, 0);
        addtn(segtree[idx], res);
        return;
    }
    int mid = (lft + rgt) / 2;
    if (pos <= mid) updt(2 * idx, lft, mid, pos, res);
    else updt(2 * idx + 1, mid + 1, rgt, pos, res);
    milao(segtree[idx], segtree[2 * idx], segtree[2 * idx + 1]);
}
void pocho(int idx, int lft, int rgt, int l, int r, int ans[maxn2]){
    if (r < lft || rgt < l)return;
    if (l <= lft && rgt <= r){
        milao(ans, ans, segtree[idx]);
        return;
    }
    int mid = (lft + rgt) / 2;
    pocho(2 * idx, lft, mid, l, r, ans);
    pocho(2 * idx + 1, mid + 1, rgt, l, r, ans);
}
void push(){
    int q;
    ci q;
    while (q--){
        int tp;
        ci tp;
        if(tp==1){
            int l,r;
            ci l>>r;
            l--, r--;
            int k[maxn2] = {0};
            pocho(1,0,n-1,l,r,k);
            int pt(postn(k));
            if(pt==0)cou(0)
            else{
                int ans((a2[r-l+1]-a2[r-l+1-pt]+mod)%mod);
                cou(ans);
            }
        }
        else{
            int i, x;
            ci i >> x;
            i--;
            vf[i] = a1[x];
            updt(1,0,n-1,i,vf[i]);
        }
    }
}

signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = std::chrono::high_resolution_clock::now();
    randi();
    a2[0] = 1;
    for1(i,maxn-1)a2[i]=(2LL*a2[i-1])%mod;
    ci n;
    for0(i,n){
        ci v0[i];
        vf[i]=a1[v0[i]];
    }
    banao(1, 0, n - 1);
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
