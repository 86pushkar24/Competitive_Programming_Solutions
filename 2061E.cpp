// //    जय श्री राधे कृष्णा।                                                         */

// #include "bits/stdc++.h"
// using namespace std;

// // Macros
// #define int int
// #define endl '\n'
// #define for0(i, n) for (int i = 0; i < n; ++i)
// #define for1(i, n) for (int i = 1; i <= n; ++i)
// #define fl(a, b) for (int i = a; i < (b); ++i)
// #define rfl(a, b) for (int i = a; i >= (b); --i)

// #define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
// #define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
// #define mne(v) *min_element(v.begin(), v.end())
// #define mxe(v) *max_element(v.begin(), v.end())

// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define cy(x)           \
//     {                   \
//         if (x)          \
//             yes else no \
//     }

// #define aint(v) v.begin(), v.end()
// #define vi vector<int>
// #define vb vector<bool>
// #define vc vector<char>
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define pii pair<int, int>
// #define di deque<int>
// #define que queue<int>
// #define si set<int>
// #define mii map<int, int>
// #define mts multiset<int>

// #define pb push_back
// #define bg begin()
// #define nd end()
// #define fi first
// #define se second
// #define ins insert

// // Input/Output Macros
// #define cin(a) \
//     int n;     \
//     cin >> n;  \
//     vi a(n);   \
//     for0(i, n) { cin >> a[i]; }
// #define co(a)             \
//     {                     \
//         cout << a << ' '; \
//     }
// #define cou(a)             \
//     {                      \
//         cout << a << "\n"; \
//     }
// #define ci cin >>
// #define sz(c) c.size()

// // Vector Operations
// #define sortv(v) sort(aint(v))
// #define rev(v) reverse(aint(v))
// #define sumv(arr) accumulate(aint(arr), 0LL)
// #define Ceil(a, b) ((a + b - 1) / b)
// #define ai(o) \
//     vi a(n);  \
//     for0(i, n) ci a[i];

// // Type Aliases for Nested Containers
// using vvb = vector<vector<bool>>;
// using vvc = vector<vector<char>>;
// using vvi = vector<vector<int>>;
// using vvp = vector<vector<pair<int, int>>>;

// // Constants
// const int maxn = 4e5 + 5;
// const int inf = 1e18;
// const int mod = 1e9 + 7;

// // Utility Functions (Commented for Optional Use)
// // int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// // int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// // int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// // int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// // bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// // static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }
// #ifndef ONLINE_JUDGE
// #define debug(x)       \
//     cerr << #x << " "; \
//     _print(x);         \
//     cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(int t) { cerr << t; }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(double t) { cerr << t; }
// void _print(int t) { cerr << t; }

// template <class T, class V>
// void _print(pair<T, V> p);
// template <class T>
// void _print(vector<T> v);
// template <class T>
// void _print(set<T> v);
// template <class T, class V>
// void _print(map<T, V> v);
// template <class T>
// void _print(multiset<T> v);
// template <class T, class V>
// void _print(pair<T, V> p)
// {
//     cerr << "{";
//     _print(p.first);
//     cerr << ",";
//     _print(p.second);
//     cerr << "}";
// }
// template <class T>
// void _print(vector<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T>
// void _print(set<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T>
// void _print(multiset<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T, class V>
// void _print(map<T, V> v)
// {
//     cerr << "[ ";
//     for (auto i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }

// // Pushkar Gupta's Solution Starts Here
// bool cmp(int &x, int &y)
// {
//     return x > y;
// }
// void push()
// {
//     int n, m, k;
//     ci n >> m >> k;
//     vi v0(n), v1(m);
//     int res(0);
//     for0(i, n)
//     {
//         ci v0[i];
//         res += v0[i];
//     }
//     for0(i, m) ci v1[i];
//     vi v2(1 << m, 0), v3(1 << m, 0);
//     for0(i, (1 << m))
//     {
//         for0(j, m)
//         {
//             if ((i >> j) & 1)
//             {
//                 v2[i]++;
//                 v3[i] = j;
//             }
//         }
//     }
//     vvi vv(n, vi(m + 1));
//     for0(i, n) for0(j, m + 1) vv[i][j] = v0[i];
//     for0(i, n)
//     {
//         vi v4(1 << m);
//         v4[0] = v0[i];
//         for1(j, (1 << m) - 1)
//         {
//             int x = j ^ (1 << v3[j]);
//             v4[j] = v4[x] & v1[v3[j]];
//             // debug(i);
//             debug(j);
//             debug(x);
//             debug(v4[j]);
//             vv[i][v2[j]] = min(vv[i][v2[j]], v4[j]);
//         }
//     }
//     debug(vv);
//     vi vf(n * m);
//     for0(i, n) for0(j, m) vf[i * m + j] = vv[i][j] - vv[i][j + 1];
//     sort(aint(vf), cmp);
//     for0(i, k) res -= vf[i];
//     cou(res);
// }

// signed main()
// {
//     cin.tie(0);
//     cout.tie(0);
//     ios::sync_with_stdio(0);

//     auto begin = std::chrono::high_resolution_clock::now();

//     int tc = 1;
//     cin >> tc;

//     for (int t = 1; t <= tc; t++)
//     {
//         // cout << "Case #" << t << ": ";
//         push();
//     }

//     auto end = std::chrono::high_resolution_clock::now();
//     auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
//     cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
// }
#include <bits/stdc++.h>
using namespace std;

static const int MAXM = 10;
static const int MAX_MASK = 1 << MAXM;
#define int long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(m);
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
        }

        vector<int> B(1 << m, (int)(~0U));
        vector<int> costB(1 << m, 0);
        B[0] = (int)(~0U);
        for (int mask = 1; mask < (1 << m); mask++)
        {
            int lb = mask & (-mask);
            int j = __builtin_ctz(lb);
            int pmask = mask ^ lb;
            B[mask] = B[pmask] & b[j];
            costB[mask] = costB[pmask] + 1;
        }

        vector<int> bestVal(n * (m + 1));
        for (int i = 0; i < n; i++)
        {
            for (int c = 0; c <= m; c++)
            {
                if (c == 0)
                    bestVal[i * (m + 1) + c] = a[i];
                else
                    bestVal[i * (m + 1) + c] = numeric_limits<int>::max();
            }
        }

        for (int mask = 0; mask < (1 << m); mask++)
        {
            int c = costB[mask];
            int band = B[mask];
            for (int i = 0; i < n; i++)
            {
                int cand = a[i] & band;
                int &cur = bestVal[i * (m + 1) + c];
                if (cand < cur)
                {
                    cur = cand;
                }
            }
        }

        vector<int> margGain(n * (m + 1), 0ULL);
        for (int i = 0; i < n; i++)
        {
            for (int c = 1; c <= m; c++)
            {
                int fromVal = bestVal[i * (m + 1) + (c - 1)];
                int toVal = bestVal[i * (m + 1) + c];
                margGain[i * (m + 1) + c] = (fromVal - toVal);
            }
        }

        vector<int> usedCost(n, 0);
        typedef pair<int, int> PL;
        priority_queue<PL> pq;
        int sumVal = 0LL;
        for (int i = 0; i < n; i++)
        {
            sumVal += bestVal[i * (m + 1) + 0];
        }

        for (int i = 0; i < n; i++)
        {
            if (m >= 1)
            {
                int g = margGain[i * (m + 1) + 1];
                if (g > 0)
                {
                    pq.push({g, i});
                }
            }
        }

        int opsUsed = 0;
        while (opsUsed < k && !pq.empty())
        {
            auto top = pq.top();
            pq.pop();
            int g = top.first;
            int i = top.second;
            if (g <= 0)
                break;
            sumVal -= (int)g;
            usedCost[i] += 1;
            opsUsed++;
            int cNow = usedCost[i];
            if (cNow < (int)m)
            {
                int g2 = margGain[i * (m + 1) + (cNow + 1)];
                if (g2 > 0)
                {
                    pq.push({g2, i});
                }
            }
        }

        cout << sumVal << "\n";
    }
    return 0;
}
