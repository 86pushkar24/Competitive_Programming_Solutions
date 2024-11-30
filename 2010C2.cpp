/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fl(a, b) for (int i = a; i < (b); ++i)
#define rfl(a, b) for (int i = a; i >= (b); --i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define mxe(v) *max_element(v.begin(), v.end())
#define mne(v) *min_element(v.begin(), v.end())
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cy(x)           \
    {                   \
        if (x)          \
            yes else no \
    }
#define aint(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define vb vector<bool>
#define di deque<int>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int>
#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second
#define cin(a)                  \
    int n;                      \
    cin >> n;                   \
    vi a(n);                    \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v.pb(i);         \
    }
#define co(a)             \
    {                     \
        cout << a << ' '; \
    }
#define cou(a)             \
    {                      \
        cout << a << "\n"; \
    }
#define ci cin >>
#define sz(c) (int)c.size()
#define sumv(arr) accumulate(aint(arr), 0LL)
#define sortv(v) sort(aint(v));
#define rev(v) reverse(aint(v));
#define Ceil(a, b) ((a + b - 1) / b)
#define ai(o)             \
    vi o;                 \
    for0(i, n)            \
    {                     \
        int p;            \
        cin >> p;         \
        (o).push_back(p); \
    }

using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<long long>>;
using vvp = vector<vector<pair<long long, long long>>>;

const int maxn = 4e5 + 5;
const int inf = 1e18;
const int mod = 1e9 + 7;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
// int qexp(int a, int b, int m) { int res(1); while(b){ if(b%2) res = res * a % m;a = a * a % m;b /= 2;}res;}
// bool isPrime(int n) {if(n <= 1) return 0; for (int i = 2; i * i <= n; i++) {if(n % i == 0) return 0;} return 1;}
// static bool cmp(const vector<int>& a, const vector<int>& b) {return a[1] < b[1];}

// Pushkar Gupta's Solution Start's Here
// KMP
vi prefix_function(string s)
{
    int n = sz(s);
    vi pi(n);
    fl(1, n)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

void push()
{
    string s;
    ci s;
    int n = sz(s);
    vi pi = prefix_function(s);
    if (pi[n - 1] <= (n / 2))
        no else
        {
            yes
            cou(s.substr(0, pi[n - 1]))
        }
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}

//.........Bit_Manipulation...........//
// #define msb(mask) (63 - __builtin_clzll(mask)) /// 0 -> -1
// #define lsb(mask) __builtin_ctzll(mask)        /// 0 -> 64
// #define cntsetbit(mask) __builtin_popcountll(mask)
// #define checkbit(mask, bit) ((mask >> bit) & 1ll)
// #define onbit(mask, bit) ((mask) | (1LL << (bit)))
// #define offbit(mask, bit) ((mask) & ~(1LL << (bit)))
// #define changebit(mask, bit) ((mask) ^ (1LL << bit))