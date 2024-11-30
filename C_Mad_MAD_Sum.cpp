#include "bits/stdc++.h"
// #include "stdcpp.h"
using namespace std;

#define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define aint(v) v.begin(), v.end()
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int> 
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define cou(a) {cout<<a<<"\n";}
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];
#define First fi
#define Second se

const int MOD = 1e9 + 7;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
// int qexp(int a, int b, int m) { int res(1); while(b){ if(b%2) res = res * a % m;a = a * a % m;b /= 2;}res;}

// Pushkar Gupta's Solution Start's Here
int n,x,y,a[200050],b[200050],cnt[200050],d[200050],suf[200050];
void push(){
	cin >> n;
	int sum=0;
	for1(i,n) cnt[i]=a[i]=b[i]=d[i]=0;
	for1(i,n) cin >> a[i],sum+=a[i];
	vi b(n+1,0);
	int mx=0;
	for1(i,n){
		cnt[a[i]]++;
		if (cnt[a[i]]>=2&&a[i]>mx) mx=a[i];
		b[i]=mx;
	}
	for1(i,n) a[i]=b[i],sum+=a[i],cnt[i]=d[i]=0;
	mx=0;
	for1(i,n){
		cnt[a[i]]++;
		if (cnt[a[i]]>=2&&a[i]>mx) mx=a[i];
		b[i]=mx;
	}
//	for1(i,n) cerr << b[i] << " ";cerr << endl;
	for1(i,n) sum+=(n-i+1)*b[i];
	cout << sum << endl;
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
