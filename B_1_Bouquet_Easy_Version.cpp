// #include "bits/stdc++.h"
#include "stdcpp.h"
using namespace std;

#define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fore(i, a, b) for (int i = a, gon = b; i < gon; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vb vector<bool>
#define di deque<int>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int> 
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define cou(a) {cout<<a<<"\n";}
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}
#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second

const int MOD = 1e9 + 7;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
// int qexp(int a, int b, int m) { int res(1); while(b){ if(b%2) res = res * a % m;a = a * a % m;b /= 2;}res;}

// Pushkar Gupta's Solution Start's Here
int n,m,sm(0),mx(0),j(0);
void push()
{
    int n,m,sm(0),tt(0),res(0);
    cin >>n>>m;
    vi a(n,0);
    mii mpp;
    for0(i,n){
        cin >> a[i];
        mpp[a[i]]++;
    }
    for (auto it : mpp) {
        if (mpp.find(it.fi + 1) == mpp.end()) {
            sm = max(sm, min(m/it.fi,it.se)*it.fi);
            continue;
        }
        for(int i=it.se; i>=0; i--) {
            tt = it.fi * i;
            if(tt<=m) {
                if(mpp[it.fi+1]>=(m-tt)/(it.fi+1)) 
                    res=max(((m-tt)/(it.fi+1))*(it.fi+1)+tt,res);
                else 
                    res=max((mpp[it.fi+1])*(it.fi+1)+tt,res);
            }
        }
        sm = max(sm,res);
    }
    cou(sm)
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
