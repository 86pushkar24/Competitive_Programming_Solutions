// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

/*
    define starts here
*/

// #define int long long

#define INP(arr, n) for (int i = 0; i < n; i ++) cin >> arr[i]
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES";
#define no cout << "NO";
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define mii map<int, int>
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())

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
    int res = 1;
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

void push(){
    int n; cin >> n;
    vi a(n);
    INP(a,n);
    vi b(n - 1);
    for(int i = 0; i + 1 < n; i++) b[i] = gcd(a[i], a[i + 1]);
    vector<bool> okSuff(n + 1, true);
    for (int i = n - 3; i >= 0; i--)
    {
        okSuff[i] = !(!okSuff[i + 1] || b[i] > b[i + 1]);
    }
    bool okPref = true;
    bool ok2 = false;
    for0(i,n)
    {
        int g = -1;
        if (i && i + 1 < n)
        {
            g = gcd(a[i - 1], a[i + 1]);
        }
        if (okPref && okSuff[i + 1])
        {
            bool ok = true;
            if (g != -1 && i - 2 >= 0 && gcd(a[i - 2], a[i - 1]) > g)
            {
                ok = false;
            }
            if (g != -1 && i + 2 < n && gcd(a[i + 1], a[i + 2]) < g)
            {
                ok = false;
            }
            if (ok)
            {
                ok2 = true;
                break;
            }
        }
        if (i >= 2 && gcd(a[i], a[i - 1]) < gcd(a[i - 1], a[i - 2]))
        {
            okPref = false;
        }
    }
    cout << (ok2 ? "YES" : "NO") << endl;
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