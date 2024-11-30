#include "bits/stdc++.h"
using namespace std;

#define int long long
#define nl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fore(i, a, b) for (int i = a, gon = b; i < gon; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define aint(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector< pair<int, int> >
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
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define cy(x) {if(x) yes else no}

const int maxn=4e5+5;
const int inf=1e18;
const int mod=1e9+7;
const int N=500010;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
// int qexp(int a, int b, int m) { int res(1); while(b){ if(b%2) res = res * a % m;a = a * a % m;b /= 2;}res;}
// bool isPrime(int n) {if(n <= 1) return 0; for (int i = 2; i * i <= n; i++) {if(n % i == 0) return 0;} return 1;}
// static bool cmp(const vector<int>& a, const vector<int>& b) {return a[1] < b[1];}

// Pushkar Gupta's Solution Start's Here
int n, q;
int w[N], s[N];
int cal(int u, int len)
{
    // cout << "u=" << u << " len=" << len << "\n";
    if (u + len - 1 <= n) return s[u + len - 1] - s[u - 1];
    else
    {
        int res = s[n] - s[u - 1];
        res += s[len - (n - u + 1)];
        return res;
    }
}
void push()
{
    cin >> n >> q;
    for1(i, n) cin >> w[i], s[i] = s[i - 1] + w[i];
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int idl = (l - 1) / n + 1, idr = (r - 1) / n + 1;
        int res = (idr - idl - 1) * s[n];
        // cout << "=" << cal((l + idl - 2) % n + 1, idl * n - l + 1) << "\n";
        // cout << (idr - 1) * n + 1 << " " << idr << "\n";
        res += cal((l + idl + n - 2) % n + 1, idl * n - l + 1);
        // cout << "res=" << res << "\n";
        res += cal(((idr - 1) * n + 1 + idr + n - 2) % n + 1, r - (idr - 1) * n);
        cou(res)
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
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
