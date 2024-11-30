// @prefix cpp
// @description
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// #include <stdcpp.h>
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define INP(arr, n) for (int i = 0; i < n; i ++) cin >> arr[i]
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
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
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define cou(a) {cout<<a<<"\n";}
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
int lcm (int a, int b) { return (a*b) / gcd(a, b);}
int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}

// Pushkar Gupta's Solution Start's Here
void push()
{
    int n, k;
    cin >> n >> k;
    int i;
    int x;
    vi v;
    for1(i, 1, n)
    {
        cin >> x;
        v.pb(x);
    }
    if (k <= n)
    {

        int hol = 0;
        int best = -1;
        for1(i, 0, k - 1)
        {

            hol += v[i];
        }

        best = hol;

        int l = 0;
        int r = k - 1;

        while (true)
        {

            if ((r + 1) > n - 1)
                break;

            hol -= v[l];
            hol += v[r + 1];

            best = max(best, hol);

            l++;
            r++;
        }

        int dd = (k * (k - 1)) / 2;
        cou(best+dd)
        return;
    }

    int ans = 0;

    for (auto u : v)
        ans += u;

    ans += (n * (n - 1)) / 2;

    k -= n;

    int p = k / n;
    int qq = k % n;

    int bal = (n * (n - 1) / 2) + (n * (n + 1)) / 2;

    ans += (p * bal);

    int aa = n + 1;
    int bb = -1;

    while (qq--)
    {

        aa--;
        bb++;

        ans += (aa + bb);
    }
    cou(ans)
}

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
