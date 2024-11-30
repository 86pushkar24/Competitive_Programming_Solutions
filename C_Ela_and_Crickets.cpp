// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
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
    cin>>n;
    int r1, c1, r2, c2, r3, c3;
    cin>>r1>>c1>>r2>>c2>>r3>>c3;
    int a1 = max(r1, max(r2, r3));
    int a2 = min(r1, min(r2, r2));
    int a3 = r1 + r2 + r3 - a1 - a2;
    int b1 = max(c1, max(c2, c3));
    int b2 = min(c1, min(c2, c3));
    int b3 = c1 + c2 + c3 - b1 - b2;
    
    int x, y;
    cin>>x>>y;
    int s1 = a1 + a2 + a3;
    int s2 = b1 + b2 + b3;
    if (s1==4 && s2==4)
    {
        if (x==1 || y==1)
        yes
        else no
        return;
    }
    if (s1==4 && s2==3*n-1)
    {
        if (x==1 || y==n)
        yes
        else no
        return;
    }
    if (s1==3*n-1 && s2==4)
    {
        if (x==n||y==1)
        yes
        else no
        return;
    }
    if (s1==3*n-1 && s2==3*n-1)
    {
        if (x==n||y==n)
        yes
        else no
        return;
    }
        int p1 = (a1 + a2 + a3)%2;
        int p2 = (b1 + b2 + b3)%2;
        if (x%2==p1 && y%2==p2) no
        else yes
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
