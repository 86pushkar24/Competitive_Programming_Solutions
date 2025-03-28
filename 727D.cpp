/*                                          जय श्री राधे कृष्णा।                                                         */
#include "bits/stdc++.h"
using namespace std;

// #define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fore(i, a, b) for (int i = a, gon = b; i < gon; ++i)
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
const int N = 6;

void push()
{
    const string S[] = {
        "S",
        "M",
        "L",
        "XL",
        "XXL",
        "XXXL",
    };

    vector<int> c(N + 1);
    for (int i = 0; i < N; ++i)
        cin >> c[i];

    int n;
    cin >> n;

    auto find = [&](string t)
    {
        for (int x = 0; x < N; ++x)
            if (t == S[x])
                return x;

        return 0;
    };

    vector<string> ans(n);
    vector<int> l(n, -1), r(n, -1);
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        int j = -1;
        for (int x = 0; x < int(s.size()); ++x)
        {
            if (s[x] == ',')
                j = x;
        }

        if (j < 0)
        {
            if (c[find(s)])
            {
                c[find(s)]--;
                ans[i] = s;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            l[i] = find(s.substr(0, j));
            r[i] = find(s.substr(j + 1));
        }
    }

    vector<int> foo(n);
    iota(foo.begin(), foo.end(), 0);
    sort(foo.begin(), foo.end(), [&](int i, int j)
         {
        if (l[i] == l[j])
            return r[i] < r[j];
        return l[i] < l[j]; });

    for (auto &i : foo)
    {
        if (l[i] < 0)
            continue;

        if (c[l[i]])
        {
            c[l[i]]--;
            ans[i] = S[l[i]];
        }
        else if (c[r[i]])
        {
            c[r[i]]--;
            ans[i] = S[r[i]];
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    for (auto &t : ans)
        cout << t << "\n";
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
