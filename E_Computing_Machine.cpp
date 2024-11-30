// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

// #define int long long
#define INP(arr, n) for (int a = 0; a < n; a ++) cin >> arr[a]
#define endl '\n'
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
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
void push(){
    ll n, q;
    cin >> n;

    string a;
    string b;

    cin >> a;
    cin >> b;

    string aa = a;
    string bb = b;

    ll i;

    for1(i, 0, n - 3)
    {

        if (aa[i] == '0' && aa[i + 2] == '0')
            bb[i + 1] = '1';
    }

    for1(i, 0, n - 3)
    {

        if (bb[i] == '1' && bb[i + 2] == '1')
            aa[i + 1] = '1';
    }

    ll g = 0;

    m[0] = 0;

    for1(i, 0, n - 1)
    {

        if (aa[i] == '1')
            g++;
        m[i + 1] = g;
    }

    cin >> q;

    while (q--)
    {

        int l, r;

        cin >> l >> r;

        int pp = r - l + 1;

        if (pp <= 4)
        {

            string xx = a.substr(l - 1, pp);
            string yy = b.substr(l - 1, pp);

            for1(i, 0, pp - 3)
            {

                if (xx[i] == '0' && xx[i + 2] == '0')
                    yy[i + 1] = '1';
            }

            for1(i, 0, pp - 3)
            {

                if (yy[i] == '1' && yy[i + 2] == '1')
                    xx[i + 1] = '1';
            }

            int ans = 0;

            for (auto u : xx)
            {

                if (u == '1')
                    ans++;
            }

            cout << ans << "\n";
            continue;
        }

        int yo = m[r - 2] - m[l + 1];

        if (a[l - 1] == '1')
            yo++;
        if (a[r - 1] == '1')
            yo++;

        if (a[l] == '1')
            yo++;
        else if (b[l - 1] == '1' && bb[l + 1] == '1')
            yo++;

        if (a[r - 2] == '1')
            yo++;
        else if (b[r - 1] == '1' && bb[r - 3] == '1')
            yo++;

        cout << yo << "\n";
    }
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
