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
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define cou(a) {cout<<a<<"\n";}
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}

const int MOD = 1e9 + 7;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}

// Pushkar Gupta's Solution Start's Here
void push(){
    int a, b, cnt = 0;
    cin >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1; 
    cin >> x2 >> y2; 
    int dx[8] = {b, b, -b, -b, a, a, -a, -a};
    int dy[8] = {a, -a, a, -a, b, -b, b, -b};
    set< pair<int, int> > s;
    for(int i = 0; i < 8; ++i){
        int _i = dx[i] + x1;
        int _j = dy[i] + y1;
        bool ok = 0;
        for(int j = 0; j < 8; ++j){
            int di = _i + dx[j];
            int dj = _j + dy[j];
            if(di == x2 and dj == y2)
                ok = 1;
        }
        if(ok)
            s.insert({_i, _j});
    }
    cou(s.size())
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    cin >> tc;
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
