// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

// #define int long long
#define INP(arr, n)             \
    for (int a = 0; a < n; a++) \
    cin >> arr[a]
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int>
#define pb push_back
#define mxe(v) *max_element(v.begin(), v.end())
#define mne(v) *min_element(v.begin(), v.end())
/*
    constants starts here
*/
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

/*
    functions starts here
*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    a %= b;
    return gcd(b, a);
}
int binpow(int x, int y, int m)
{
    int res(1);
    x = x % m;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}

/*
    Pushkar
            Gupta's
                        Solution
                Start's
        Here
*/
void push()
{
    int n, k;
    cin >> n >> k;
    k = 2 * k;

    vector<int> a(2 * n), occ(n + 1, 0);

    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; i++)
        occ[a[i]]++;

    vector<int> g0, g1, g2;
    for (int i = 1; i <= n; i++)
    {
        if (occ[i] == 0)
            g0.push_back(i);
        else if (occ[i] == 1)
            g1.push_back(i);
        else
            g2.push_back(i);
    }

    int v = 0;
    for (auto x : g2)
    {
        if (v < k)
        {
            v += 2;
            cout << x << " " << x << " ";
        }
    }
    for (auto x : g1)
    {
        if (v < k)
        {
            v++;
            cout << x << " ";
        }
    }
    cout << endl;
    v = 0;
    for (auto x : g0)
    {
        if (v < k)
        {
            v += 2;
            cout << x << " " << x << " ";
        }
    }
    for (auto x : g1)
    {
        if (v < k)
        {
            v++;
            cout << x << " ";
        }
    }
    cout << endl;
}

/*
    Pushkar
            Gupta's
                        Solution
                End's
        Here
*/

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
        push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
/**
 *
 * +-----+-----------------+
 * |  n  | Worst Algorithm |
 * +-----+-----------------+
 * | 11  | O(n!), O(n^6)   |
 * | 18  | O(2^n * n^2)    |
 * | 22  | O(2^n * n)      |
 * | 100 | O(n^4)          |
 * | 400 | O(n^3)          |
 * | 2K  | O(n^2 log n)    |
 * | 10K | O(n^2)          |
 * | 1M  | O(n log n)      |
 * +-----+-----------------+
 *
 * Lower Bound: First >=, Upper Bound: First >
 **/