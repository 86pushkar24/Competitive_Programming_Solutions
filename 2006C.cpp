/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
using namespace std;

// Macros
#define int long long
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fl(a, b) for (int i = a; i < (b); ++i)
#define rfl(a, b) for (int i = a; i >= (b); --i)

#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define mne(v) *min_element(v.begin(), v.end())
#define mxe(v) *max_element(v.begin(), v.end())

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cy(x)           \
    {                   \
        if (x)          \
            yes else no \
    }

#define aint(v) v.begin(), v.end()
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
#define stk stack<int>

#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second
#define ins insert

// Input/Output Macros
#define cin(a) \
    int n;     \
    cin >> n;  \
    vi a(n);   \
    for0(i, n) { cin >> a[i]; }
#define co(a)             \
    {                     \
        cout << a << ' '; \
    }
#define cou(a)             \
    {                      \
        cout << a << "\n"; \
    }
#define ci cin >>
#define sz(c) c.size()

// Vector Operations
#define sortv(v) sort(aint(v))
#define rev(v) reverse(aint(v))
#define sumv(arr) accumulate(aint(arr), 0LL)
#define Ceil(a, b) ((a + b - 1) / b)
#define ai(o) \
    vi a(n);  \
    for0(i, n) ci a[i];

// Type Aliases for Nested Containers
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvi = vector<vector<int>>;
using vvp = vector<vector<pair<int, int>>>;

// Constants
const int maxn = 4e5 + 5;
const int inf = 1e18;
const int mod = 1e9 + 7;

// Utility Functions (Commented for Optional Use)
// int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
int sgmttree[1600001];
int arr[400001];

void banao(int v,int left,int right)
{
    if(left>right)return;
    if(left==right)sgmttree[v]=arr[left];
    else{
        int tm=(left+right)/2;
        banao(2*v,left,tm);
        banao(2*v+1,tm+1,right);
        sgmttree[v]=gcd(sgmttree[2*v],sgmttree[2*v+1]);
    }
}

int query(int v,int left,int right,int l,int r){
    if(l>r)return 0;
    if(l==left&&r==right)return sgmttree[v];
    int tm=(left+right)/2;
    return gcd(query(2*v,left,tm,l,min(r,tm)),query(2*v+1,tm+1,right,max(l,tm+1),r));
}

void push(){
    int n;
    ci n;
    vi a(n+1);
    for1(i,n) ci a[i];
    for1(i,n-1) arr[i]=abs(a[i+1]-a[i]);
    vi not_0(n,n);
    stk st;
    for1(i,n-1){
        if(arr[i]==0)st.push(i);
        else{
            while(!st.empty()){
                not_0[st.top()]=i;
                st.pop();
            }
            not_0[i]=i;
        }
    }
    int ans=n;
    banao(1,1,n-1);
    for1(i,n-1){
        ans+=(not_0[i]-i);
        int idx=not_0[i];
        int l=idx,r=n-1,pos=n;
        while(l<=r){
            int m=(l+r)/2;
            int v=query(1,1,n-1,idx,m);
            if(v&(v-1))l=m+1;
            else{
                pos=m;
                r=m-1;
            }
        }
        ans+=(n-pos);
    }
    cou(ans);
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = std::chrono::high_resolution_clock::now();

    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        push();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
