#include "bits/stdc++.h"
using namespace std;

#define int int
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

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
// int qexp(int a, int b, int m) { int res(1); while(b){ if(b%2) res = res * a % m;a = a * a % m;b /= 2;}res;}
// bool isPrime(int n) {if(n <= 1) return 0; for (int i = 2; i * i <= n; i++) {if(n % i == 0) return 0;} return 1;}
// static bool cmp(const vector<int>& a, const vector<int>& b) {return a[1] < b[1];}
// int computeXOR(int n){if(n%4==0)return n;if(n%4==1)return 1;if(n%4==2)return n+1;return 0;}
int power(int base,int exp){
    int ans = 1;
    return binpow(base , exp , mod);
}

// Pushkar Gupta's Solution Start's Here
void push()
{
    string s;
    cin >> s;
    int len = s.size();
    int ans = 0;
    for (int i = 1; i < len; ++i)
        ans += power(5, i);

    bool ff = true;
    // cout<<ans<<" ";
    for (int i = 0; i < len; ++i)
    {
        int a = s[i] - '0';
        vi dgt;
        if ((i + 1) % 2 == 1) dgt = {1, 3, 5, 7, 9};
        else dgt = {0, 2, 4, 6, 8};
        // cout<<a<<" ";
        int idx = (i + 1) % 2;
        // cout<<idx<<" "<<a<<'\n';
        if (a % 2 == idx)
        {   
            // cout<<(a / 2 + (idx == 0))<<"db\n";
            cout<<(a/2+(idx==0))<<"\n";
            ans += (a / 2 + (idx == 0)) * (power(5, len - i - 1));
        }
        else
        {
            ans += ((a + (idx == 0)) / 2) * power(5, len - i - 1);
            // ans += 4 * power(5 , );
            break;
        }
        cout<<ans<<" ";
    }
    cou(ans)
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
