// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

// #define int long long

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

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

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
    int n;
    cin >> n;
    for (int a = 0, b = 2 * n, c = 0; a < n; a++, b -= (1 - a % 2) * 2, c += (a % 2) * 2)
        cout << (a % 2 ? c : b) << " \n"[a == n - 1];
    for (int a = 0, b = 2 * n - 1, c = 1; a < n; a++, b -= (a % 2) * 2, c += (1 - a % 2) * 2)
        cout << (a % 2 ? (a == n - 1 ? 2 * n - 1 : b) : c) << " \n"[a == n - 1];
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
