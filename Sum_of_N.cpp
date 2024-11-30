// #include<stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

/*
    define starts here
*/

#define int long long

#define INP(arr, n) for (int a = 0; a < n; a ++) cin >> arr[a]
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
const int mx = 1e6 + 2;

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

vi prm;
vi ve(mx, 0);

void cal()
{
    ve[1] = 1;
    for (int i = 2; i < mx; i++)
    {
        if (ve[i] == 0)
        {
            ve[i] = i;
            for (int j = i * i; j < mx; j += i)
                if (ve[j] == 0) ve[j] = i;
        }
    }
}

void pre() {
    cal();
    for (int i = 2; i < mx; i++)
        if (ve[i] == i) prm.pb(i);
}

/*
    Pushkar 
            Gupta's
                        Solution
                Start's
        Here
*/

void push(){
    int k , ans(0);
    cin >> k;
    int sz = prm.size();
    if (ve[k] == k)
        for (int i = 0; i < sz && prm[i] <= k; i++) ans += prm[i]*k;
    else
        for (int i = 0; i < sz && prm[i] <= ve[k]; i++) ans += prm[i]*k;
    cout << ans << endl;
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
    pre();
    int tc = 1;
    cin >> tc;
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
