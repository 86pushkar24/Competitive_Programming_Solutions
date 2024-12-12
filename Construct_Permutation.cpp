/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
using namespace std;

// macros
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
#define mii unordered_map<int, int>
#define mts multiset<int>

#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second
#define nl endl

// Input/Output Macros
#define cin(a) \
    int n;     \
    cin >> n;  \
    vi a(n);   \
    for0(i, n) { cin >> a[i]; }
#define co()             \
    {                     \
        cout << ' '; \
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
bool fn(vi &v1)
{
    int n = sz(v1), m = n + 1;
    mii mp;
    mp[0] = 1;
    int sm(0);
    for0(i, n)
    {
        sm += v1[i];
        int r = sm % m;
        if (r < 0)
            r += m;
        if (r == 0 || mp.find(r) != mp.end())
            return false;
        mp[r] = 1;
    }
    return true;
}
void push()
{
    int n;ci n;
    if(n%2==0){
        cou(-1) return;
    }
    vi v1(n);
    iota(aint(v1), 1);
    // if (fn(v1))
    // {
    //     for (int x : v1)
    //         co(x)
    //                 cout
    //             << endl;
    //     return;
    // }
    // // bool chk=false;
    // // for(int s=0;s<n&&!chk;s++){
    // //     vi v2(n);
    // //     for0(i,n)v2[i]=v1[(i+s)%n];
    // //     if(fn(v2)){
    // //         for(int x:v2)co(x)
    // //         cout<<endl;
    // //         chk=true;
    // //     }
    // // }
    // bool chk = false;
    // for (int i = 0; i < n * n && !chk; i++)
    // {
    //     int m = n + 1, sum = 0;
    //     mii mp;
    //     mp[0] = 0;
    //     int k = -1;
    //     for0(i, n)
    //     {
    //         sum += v1[i];
    //         int r = sum % m;
    //         if (r < 0)
    //             r += m;
    //         if (r == 0 || mp.find(r) != mp.end())
    //         {
    //             k = i;
    //             break;
    //         }
    //         mp[r] = i + 1;
    //     }

    //     if (k == -1)
    //     {
    //         chk = true;
    //         break;
    //     }
    //     bool chk2 = false;
    //     if (k + 1 < n)
    //     {
    //         swap(v1[k], v1[k + 1]);
    //         if (fn(v1))
    //         {
    //             chk = true;
    //             break;
    //         }
    //         else swap(v1[k], v1[k + 1]);
    //     }
    //     if (k > 0)
    //     {
    //         swap(v1[k], v1[k - 1]);
    //         if (fn(v1))
    //         {
    //             chk = true;
    //             break;
    //         }
    //         else swap(v1[k], v1[k - 1]);
    //     }
    //     rotate(v1.bg, v1.bg + 1, v1.bg + k + 1);
    // }

    // if (!fn(v1))
    // {
    //     reverse(v1.bg, v1.nd);
    //     if (!fn(v1))
    //     {
    //         cou(-1)
    //         return;
    //     }
    // }
    // for (int x:v1)co(x)
    //         cout<< endl;
    // if (!fn(v1)){
    //     srand((unsigned)time(NULL));
    //     bool chk = false;
    //     for (int i = 0; i < 1000 && !chk; i++){
    //         random_shuffle(aint(v1));
    //         if (fn(v1)){
    //             chk = true;
    //             break;
    //         }
    //     }
    //     if (!chk){
    //         for (int j = 0; j < n && !chk; j++){
    //             for (int i = 0; i + 1 < n && !chk; i++){
    //                 swap(v1[i], v1[i + 1]);
    //                 if (fn(v1)){
    //                     chk = true;
    //                     break;
    //                 }
    //                 swap(v1[i], v1[i + 1]);
    //             }
    //         }
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    for1(i,n){
        int x;
        if(i%2!=0)x=i;
        else x=(n+1)-i;
        cout<<x;
        if(i==n)cout<<nl;
        else cout<<' ';
    }
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
