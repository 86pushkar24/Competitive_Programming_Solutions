// @prefix cpp
// @description
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
#include <stdcpp.h>
// #include<bits/stdc++.h>
using namespace std;

// #define int long long
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
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
int lcm (int a, int b) { return (a*b) / gcd(a, b);}
int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}

// Pushkar Gupta's Solution Start's Here
void push(){
    int n;
    cin>>n;
    map<int,int> M;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        M[e]++;
    }
    vector<pair<int,int> > A;   
    for(auto [e,freq]:M){
        A.push_back({freq,e});
        // cout<<e<<' '<<freq<<'\n';
    }
    // cout<<"--------\n";
    sort(A.begin(),A.end());
    int x=0,s=M.size(),i=1,past=0;
    vector<bool> vis(n,true);
    auto itr=M.begin();
    while(itr!=M.end()){
        x++;
        itr->second--;
        if(itr->second==0){
            vis[itr->first]=false;
        }
        int idx = A[i].second;
        M[idx]-=1+past;
        // cout<<M[idx];
        if(M[idx]==0){
            // cout<<past<<"past";
            vis[idx]=false;
        }
        // cout<<itr->first<<' '<<idx<<'\n';
        itr++;
        while(itr!=M.end() && !vis[itr->first]){
            itr++;
        }
        if(itr==M.end())break;
        past=0;
        if(itr->first==idx){
            past = A[i].first - itr->second;
            // cout<<past<<"af\n";
        }
        if(i<s && !vis[A[i].second])i++;
        while(i<s && A[i].second<=itr->first){
            i++;
            if(i<s && !vis[A[i].second])i++;
        }
        if(i==s){
            // cout<<itr->first<<' '; 
            x++;
            break;
        }
    }
    cout<<x<<'\n';
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
