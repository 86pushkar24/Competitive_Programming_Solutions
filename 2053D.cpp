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
#define ins insert

// Input/Output Macros
#define cin(a) int n;cin>>n;vi a(n);for0(i,n){cin>>a[i];}
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define ci cin >>
#define sz(c) c.size()

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
const int mod = 998244353;

// Utility Functions (Commented for Optional Use)
// int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
// int fn(mts &ms1,mts &ms2,int n){
//     // vi v3(v1),v4(v2);
//     // sort(aint(v3));
//     // sort(aint(v4));
//     auto it1=ms1.bg,it2=ms2.bg;
//     int k(1LL);
//     for0(i,n){
//     // k=(k*min(v3[i],v4[i])%mod)%mod;
//         k=(k*min(*it1,*it2)%mod)%mod;
//         ++it1;
//         ++it2;
//     }
//     return k;

// }
// void push(){
//     int n,q;ci n>>q;
//     vi v1(n),v2(n);
//     for0(i,n)ci v1[i];
//     for0(i,n)ci v2[i];
//     mts ms1(aint(v1));
//     mts ms2(aint(v2));
//     int ans=fn(ms1,ms2,n);
//     cout<<ans;
//     for0(i,q){
//         int k,it;ci k>>it;
//         it--;
//         if(k==1){
//             // v1[it]+=1;
//             ms1.erase(ms1.find(v1[it]));
//             v1[it]++;
//             ms1.insert(v1[it]);
//         }
//         else{
//             // v2[it]+=1;
//             ms2.erase(ms2.find(v2[it]));
//             v2[it]++;
//             ms2.insert(v2[it]);
//         }
//         ans=fn(ms1,ms2,n);
//         cout<<" "<<ans;
//     }
//     cout<<endl;
// }
void push(){
    int n,q;
    ci n>>q;
    vpii a(n),b(n);
    vi a1(n),b1(n);
    for0(i,n){
        ci a[i].fi;
        a[i].se=i;
    }
    for0(i,n){
        ci b[i].fi;
        b[i].se=i;
    }

    sort(aint(a));
    sort(aint(b));

    int ans=1;
    for0(i,n){
        a1[a[i].se]=i;
        b1[b[i].se]=i;
        ans=ans*min(a[i].fi,b[i].fi)%mod;
    }
    co(ans);

    while(q--){
        int o,x;
        ci o>>x;
        x--;

        if(o==1){
            if(a1[x]==n-1||a[a1[x]].fi+1<=a[a1[x]+1].fi){
                int b1_val=min(a[a1[x]].fi,b[a1[x]].fi);
                ans=ans*qexp(b1_val,mod-2,mod)%mod;
                a[a1[x]].fi++;
                b1_val=min(a[a1[x]].fi,b[a1[x]].fi);
                ans=ans*b1_val%mod;
            }
            else{
                pii p={a[a1[x]].fi,n};
                int y=ubound(a,p)-1;
                int i1=x,i2=a[y].se;
                swap(a[a1[x]],a[y]);
                swap(a1[i1],a1[i2]);
                int b1_val=min(a[a1[x]].fi,b[a1[x]].fi);
                ans=ans*qexp(b1_val,mod-2,mod)%mod;
                a[a1[x]].fi++;
                b1_val=min(a[a1[x]].fi,b[a1[x]].fi);
                ans=ans*b1_val%mod;
            }
        }
        else{
            if(b1[x]==n-1||b[b1[x]].fi+1<=b[b1[x]+1].fi){
                int a1_val=min(b[b1[x]].fi,a[b1[x]].fi);
                ans=ans*qexp(a1_val,mod-2,mod)%mod;
                b[b1[x]].fi++;
                a1_val=min(b[b1[x]].fi,a[b1[x]].fi);
                ans=ans*a1_val%mod;
            }
            else{
                pii p={b[b1[x]].fi,n};
                int y=ubound(b,p)-1;
                int i1=x,i2=b[y].se;
                swap(b[b1[x]],b[y]);
                swap(b1[i1],b1[i2]);
                int a1_val=min(b[b1[x]].fi,a[b1[x]].fi);
                ans=ans*qexp(a1_val,mod-2,mod)%mod;
                b[b1[x]].fi++;
                a1_val=min(b[b1[x]].fi,a[b1[x]].fi);
                ans=ans*a1_val%mod;
            }
        }

        co(ans);
    }

    cout<<endl;
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
