/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
using namespace std;

// Macros
#define int long long
#define endl '\n'
#define for0(i,n)for(int i=0;i<n;++i)
#define for1(i,n)for(int i=1;i<=n;++i)
#define fl(a,b)for(int i=a;i<(b);++i)
#define rfl(a,b)for(int i=a;i>=(b);--i)

#define lbound(v, x) lower_bound(v.begin(),v.end(),x)-v.begin()
#define ubound(v, x) upper_bound(v.begin(),v.end(),x)-v.begin()
#define mne(v) *min_element(v.begin(),v.end())
#define mxe(v) *max_element(v.begin(),v.end())

#define yes cout<<"YES"<<endl;
#define no cout << "NO" << endl;
#define cy(x){if(x)yes else no}

#define aint(v) v.begin(),v.end()
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs = vector<string>;
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define di deque<int>
#define que queue<int>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int>

#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second

// Input/Output Macros
#define cin(a) int n;cin>>n;vi a(n);for0(i,n){cin>>a[i];}
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define ci cin >>
#define sz(c) c.a2e()

// Vector Operations
#define sortv(v) sort(aint(v))
#define rev(v) reverse(aint(v))
#define sumv(arr) accumulate(aint(arr), 0LL)
#define Ceil(a, b) ((a + b - 1) / b)
#define ai(o) vi a(n);for0(i,n)ci a[i];

// Type Aliases for Nested Containers
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvi = vector<vector<int>>;
using vvp = vector<vector<pair<int, int>>>;

// Constants
const int maxn = 4e5 + 5;
const int inf = 1e18;
const int mod = 1e9 + 7;
const int N = 1010, M = N * N;

// Utility Functions (Commented for Optional Use)
// int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return a1lse; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return a1lse; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
int n,m,a1[M],a2[M];
int fn1(int a, int b){
    if (a>=1 && a<=n && b>=1 && b<=m)return (a-1)*m+b;
    return 0;
}
int fn2(int a){
    if(a1[a]==a)return a;
    return a1[a]=fn2(a1[a]);
}
void fn3(int a,int b){
    a=fn2(a),b=fn2(b);
    if(a==b)return;
    a1[b]=a;
    a2[a]+=a2[b];
}
void push(){
    ci n>>m;
    string a[1010];
    for1(i,n){
        ci a[i];
        a[i]="#"+a[i]+"#";
    }
    a[0]=a[n+1]=string(m+2,'#');
    for0(i,n*m+1)
    {
        a1[i] = i;
        a2[i] = 1;
    }

    for1(i,n)
    {
        for1(j,m)
        {
            if(a[i][j]=='L')fn3(fn1(i,j-1),fn1(i,j));
            if(a[i][j]=='R')fn3(fn1(i,j+1),fn1(i,j));
            if(a[i][j]=='D')fn3(fn1(i+1,j),fn1(i,j));
            if(a[i][j]=='U')fn3(fn1(i-1,j),fn1(i,j));
        }
    }
    int res(0);
    for1(i,n)
    {
        for1(j,m)
        {
            if(a[i][j]!='?')
            {
                if (fn2(fn1(i,j))!=fn2(0))res++;
            }
            else
            {
                for0(k,4)
                {
                    int dx[]={0,0,1,-1};
                    int dy[]={1,-1,0,0};
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if (fn2(fn1(x,y))!=fn2(0))
                    {
                        res++;
                        break;
                    }
                }
            }
        }
    }
    cou(res);
}

signed main() {
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
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
