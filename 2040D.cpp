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

// Utility Functions (Commented for Optional Use)
// int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
void push()
{
    int n;ci n;
    vvi g(n);
    for1(i, n - 1)
    {
        int a, b;
        ci a >> b;
        g[a - 1].pb(b - 1);
        g[b - 1].pb(a - 1);
    }

    vi vis(n, 0), sz(n, 1), p(n, -1);
    vi u;
    vi ans(n);
    bool ok = 0;
    int sp = 0;

    auto dfs1 = [&](auto &self, int a, int b) -> void
    {
        ans[a] = b;
        for (auto x : g[a])
        {
            if (x != p[a])self(self, x, b);
        }
    };

    auto dfs = [&](auto &self, int a) -> void
    {
        vis[a] = 1;
        vector<pii> temp;

        for (auto x : g[a])
        {
            if (vis[x] == 0)
            {
                p[x] = a;
                self(self, x);
                sz[a] += sz[x];
                temp.pb({sz[x], x});
            }
        }

        if (sz[a] >= n / 2 && !ok)
        {
            ok = 1;
            int c = 1;
            sp = a;
            ans[a] = 1;

            while (!temp.empty() && c + temp.back().fi <= n / 2)
            {
                c += temp.back().fi;
                dfs1(dfs1, temp.back().se, 1);
                temp.pop_back();
            }

            while (!temp.empty())
            {
                dfs1(dfs1, temp.back().se, 3);
                temp.pop_back();
            }

            sz[a] = 0;
        }
    };

    dfs(dfs, 0);

    auto dfs2 = [&](auto &self, int a) -> void
    {
        if (a == sp)
            return;
        ans[a] = 2;

        for (auto x : g[a])
        {
            if (x != p[a])
            {
                self(self, x);
            }
        }
    };

    dfs2(dfs2, 0);

    int a[] = {0, 5, 6, 7};
    vi fans(n);

    for0(i, n){
        if (i == sp)fans[i] = 1;
        else if (i == p[sp])fans[i] = 2;
        else{
            fans[i] = a[ans[i]];
            a[ans[i]] += 4;
        }
    }

    for (auto x : fans) co(x);
    cout << endl;
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