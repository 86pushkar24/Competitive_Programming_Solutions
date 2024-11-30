#include "bits/stdc++.h"
using namespace std;

#define int long long
#define nl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fore(i, a, b) for (int i = a, gon = b; i < gon; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define aint(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector< pair<int, int> >
#define vb vector<bool>
#define di deque<int>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int> 
#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define cy(x) {if(x) yes else no}

const int maxn=4e5+5;
const int inf=1e18;
const int mod=1e9+7;
const int mx_h = 1000000 + 1;
int spf[mx_h];
// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
// int qexp(int a, int b, int m) { int res(1); while(b){ if(b%2) res = res * a % m;a = a * a % m;b /= 2;}res;}
// bool isPrime(int n) {if(n <= 1) return 0; for (int i = 2; i * i <= n; i++) {if(n % i == 0) return 0;} return 1;}
// static bool cmp(const vector<int>& a, const vector<int>& b) {return a[1] < b[1];}

// Pushkar Gupta's Solution Start's Here
void pre(){
    for(int i=2;i<mx_h;++i)spf[i] = i;
    for(int i=2;i*i<mx_h;++i)if(spf[i]==i)for(int j=i*i;j<mx_h;j+=i)if(spf[j]==j)spf[j]=i;
}
int sm_exp(int n){
    int sum = 0;
    while(n>1)
    {
        int prm = spf[n];
        while(n%prm==0){
            n /= prm;
            sum++;
        }
    }
    return sum;
}
int mx_m,mx_sm,k;
vi vec = {2, 3, 5, 7, 11, 13};
void rec(int cr_pdt, int cr_sm, int idx)
{
    if(cr_sm>mx_sm||(cr_sm==mx_sm&&cr_pdt<mx_m))
    {
        mx_sm=cr_sm;
        mx_m=cr_pdt;
    }
    for(int i=idx;i<vec.size();++i)
    {
        int prm = vec[i],tmp = cr_pdt,exp = 1;
        while (true){
            tmp*=prm;
            if(tmp>k)break;
            cr_sm+=exp;
            rec(tmp,cr_sm,i+1);
            cr_sm-=exp;
            exp++;
        }
    }
}
void push(){
    int h;cin>>h>>k;
    int sm=sm_exp(h);
    mx_m=1;
    mx_sm=0;
    rec(1LL,0,0);
    int ans=sm+mx_sm;
    cou(ans)
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    cin >> tc;
    pre();
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}

