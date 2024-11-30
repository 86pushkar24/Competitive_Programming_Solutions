// @prefix cpp
// @description
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
#include <stdcpp.h>
// #include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INP(arr, n) for (int i = 0; i < n; i ++) cin >> arr[i]
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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define pii pair<int, int>
#define vii vector<pii>

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
int lcm (int a, int b) { return (a*b) / gcd(a, b);}
int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}

// Pushkar Gupta's Solution Start's Here
bool compare(pii p1,pii p2){
    return p1.ff > p2.ff;
}
 
void push(vi &a, vi &b, int s1, int s2, vii &r, int n){
    ll t1 = 0;
    ll t2 = 0;
    if (1LL * r[0].ff * s1 < 1LL * r[0].ff * s2)
    {
        a.push_back(r[0].ss);
        t1 = 1LL * r[0].ff * s1;
    }
    else{
        b.push_back(r[0].ss);
        t2 = 1LL * r[0].ff * s2;
    }
    rep(i,1,n){
        if((t1+1LL*r[i].ff*s1)<(t2+1LL*r[i].ff*s2)){
            a.push_back(r[i].ss);
            t1 += 1LL * r[i].ff * s1;
        }
        else{
            b.push_back(r[i].ss);
            t2 += 1LL * r[i].ff * s2;
        }
    }
 
    cout << a.size() << " ";
    rep(i,0,a.size()){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << b.size() << " ";
    rep(i,0,b.size()){
        cout << b[i] << " ";
    }
    cout << endl;
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
