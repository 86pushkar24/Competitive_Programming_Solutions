// #include "bits/stdc++.h"
#include "stdcpp.h"
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
void push()
{
    int n, k,cnt(0), ans(0), qq(0);
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1==s2 && (s1=="01"||s1=="10") && k%2==1)
    {
        no
        return;
    }
    for0(i,n)
    {
        if (s1[i] != s2[i])
        {
            cnt++;
            ans += s1[i]-'0';
        }
        else qq++;
    }
    int sz=s1.size();
    if (cnt==2 && sz==2 && k%2==0)
    {
        no
        return;
    }
    if (cnt==ans*2 && ans<=k) yes
    else no
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    // auto begin = std::chrono::high_ansolution_clock::now();
    int tc = 1;
    cin >> tc;
    while(tc--) push();
    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
