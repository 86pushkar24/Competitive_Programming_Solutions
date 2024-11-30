#include "bits/stdc++.h"
// #include "stdcpp.h"
using namespace std;

// #define int long long
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
#define cou(a)             \
    {                      \
        cout << a << "\n"; \
    }
#define cin(a)                  \
    int n;                      \
    cin >> n;                   \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }

const int MOD = 1e9 + 7;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}

// Pushkar Gupta's Solution Start's Here
void push()
{
    int n, k;
    cin >> n >> k;
    map<int, vi > mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x % k].pb(x);
    }
    int odd = 0;
    int ans = 0;
    for (auto &[x, v] : mp)
    {
        if (v.size() % 2 == 1)
            odd += 1;
        if (odd > 1)
        {
            ans = -1;
            break;
        }
        sort(all(v));
        int zs = v.size();
        vi  pre(zs), suf(zs);
        for (int i = 1; i < zs; i += 2)
        {
            pre[i] = (i - 2 >= 0 ? pre[i - 2] : 0) + v[i] - v[i - 1];
        }
        for (int i = int(zs) - 2; i >= 0; i -= 2)
        {
            suf[i] = (i + 2 < zs ? suf[i + 2] : 0) + v[i + 1] - v[i];
        }
        if (zs % 2 == 0)
        {
            ans += pre.back() / k;
        }
        else
        {
            int mn = 1e18;
            for (int i = 0; i < zs; i += 2)
            {
                int t = 0;
                if (i - 1 >= 0)
                    t += pre[i - 1];
                if (i + 1 < zs)
                    t += suf[i + 1];
                mn = min(mn, t);
            }
            ans += mn / k;
        }
    }
    cou(ans)
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    cin >> tc;
    while (tc--)
        push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
