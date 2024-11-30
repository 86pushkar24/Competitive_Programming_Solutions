// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define int long long
#define INP(arr, n) for (int a = 0; a < n; a ++) cin >> arr[a]
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
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define pii pair<int, int> 
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
    if (b == 0) return a;
    a %= b;
    return gcd(b, a);
}
int binpow(int x, int y, int m)
{
    int res(1);
    x = x % m;
    while (y > 0)
    {
        if (y & 1) res = (res * x) % m;
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
bool comp(pii p1, pii p2)
{
    if (p1.first != p2.first)
        return (p1.first < p2.first);
    return (p1.second > p2.second);
}
void push()
{
    int n, m, h;
    cin >> n >> m >> h;
    vector< vi> v(n, vi(m));
    vector< pii > k;
    int c, d;
    for0(i,n)
    {
        for0(j,m) cin >> v[i][j];
        sort(all(v[i]));
    }
    for0(i,n)
    {
        int ans = 0, s = 0, cnt = 0;
        for0(j,m)
        {
            s += v[i][j];
            ans += s;
            if (s > h)
                break;
            cnt++;
        }
        if (cnt == m)   cnt--;
        if (s > h) cnt--, ans -= s;
        k.pb({cnt, ans});
        if (i == 0) c = cnt, d = ans;
    }
    sort(k.rbegin(), k.rend(), comp);
    int pos = 1;
    for0(i,k.size())
    {
        if (k[i].first == c and k[i].second == d)
            break;
        pos++;
    }

    cout << pos << endl;
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
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
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
