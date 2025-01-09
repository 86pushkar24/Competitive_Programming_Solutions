/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
using namespace std;

// Macros
#define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fl(a, b) for (int i = a; i < (b); ++i)
#define rfl(a, b) for (int i = a; i >= (b); --i)

#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define mne(v) *min_element(v.begin(), v.end())
#define mxe(v) *max_element(v.begin(), v.end())

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cy(x)           \
    {                   \
        if (x)          \
            yes else no \
    }

#define aint(v) v.begin(), v.end()
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
#define ins insert

// Input/Output Macros
#define cin(a) \
    int n;     \
    cin >> n;  \
    vi a(n);   \
    for0(i, n) { cin >> a[i]; }
#define co(a)             \
    {                     \
        cout << a << ' '; \
    }
#define cou(a)             \
    {                      \
        cout << a << "\n"; \
    }
#define ci cin >>
#define sz(c) c.size()

// Vector Operations
#define sortv(v) sort(aint(v))
#define rev(v) reverse(aint(v))
#define sumv(arr) accumulate(aint(arr), 0LL)
#define Ceil(a, b) ((a + b - 1) / b)
#define ai(o) \
    vi a(n);  \
    for0(i, n) ci a[i];

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
bool chk(int x, int y){
    si s1 = {x, x ^ 1};
    vi s2 = {y, y ^ 1, y ^ 2, y ^ 3};
    for (auto &it : s2) if (s1.count(it))return true;
    return false;
}

void push(){
    int n;
    ci n;
    vi v1(n);
    for0(i, n)ci v1[i];
    int res = n;
    for0(i, n - 1)if (chk(v1[i], v1[i + 1]))res++;
    vi v2(n);
    int st = 0;
    while (st < n){
        int lt = st;
        while (lt + 1 < n && v1[lt + 1] == v1[st])lt++;
        fl(st, lt + 1)v2[i] = lt;
        st = lt + 1;
    }
    for0(k, n){
        int elt = v2[k];
        int eql = elt - k + 1;
        if(eql>=3)res+=(eql-2);
        for1(len, 60){
            int r = k + len - 1;
            if (r >= n)break;
            if (v2[k] >= r)continue;
            int bv = (v1[k] ^ 1);
            bool chk2 = true;
            fl(1,len){
                int curr = (v1[k + i] ^ (i + 1));
                if (curr != bv){
                    chk2 = false;
                    break;
                }
            }
            if(chk2)res++;
        }
    }
    cou(res);
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = std::chrono::high_resolution_clock::now();

    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        push();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
