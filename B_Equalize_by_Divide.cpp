// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

/*
    define starts here
*/

// #define int long long

#define INP(arr, n) for (int a = 0; a < n; a ++) cin >> arr[a]
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
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())

/*
    constants starts here
*/

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

/*
    functions starts here
*/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    a %= b;
    return gcd(b, a);
}

int binpow(int x, int y, int m)
{
    int res = 1;
    x = x % m;
 
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}


/*
    Pushkar 
            Gupta's
                        Solution
                Start's
        Here
*/

void push(){
    int n; cin>>n;
    int a[n];
    for0(i,n)
    cin>>a[i];
    int mx = 0;
    if (n==1){
        cout<<0<<endl;
        return;
    }
    
    for0(i,n){
        if (a[i] == 1){
            for (int j=0; j<n; j++){
                if (a[j] != 1){
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    
    vector <pair<int, int>> ops;
    for0(ch,n){
    for (int i=ch + 1; i<n; i++){
        while (a[i] != a[ch]){
            if (a[i] > a[ch]){
                ops.push_back({i, ch});
                a[i] = (a[i] + a[ch] - 1)/a[ch];
               // assert(a[i] != 0);
            } else {
                ops.push_back({ch, i});
                a[ch] = (a[ch] + a[i] - 1)/a[i];
               // assert(a[0] != 0);
            }
        }
    }
    }
    cout<<ops.size()<<endl;
    for (auto x: ops)
    cout<<x.first +1 <<" "<<x.second +1<<endl;
}


/*
    Pushkar 
            Gupta's
                        Solution
                End's
        Here
*/

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
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
