// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define int long long
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

bool check(vector<int> &arr, int mid, int a, int b)
{
    int n = (int)arr.size();
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        int id = i % (mid + 1);
        if (id < n)
            sum += arr[id];
    }
    if (sum >= a)
        return 1;
    else
        return 0;
}

void push()
{
    int n, a, b;
    cin >> n >> a >> b;
    vi arr(n);
    INP(arr,n);
    sort(all(arr));
    reverse(all(arr));
    if (arr[0] * b < a)
    {
        cout << "Impossible" << endl;
        return;
    }
    int sum = accumulate(all(arr) - max(n - b, 0ll), 0ll);
    if (sum >= a)
    {
        cout << "Infinity" << endl;
        return;
    }
    int low = 0;
    int high = INF;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(arr, mid, a, b))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << ans << endl;
    return;
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
