// @prefix cpp
// @description
// 
// #include <stdcpp.h>
#include<bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
const int maxn = 2e5 + 69;
int sum[maxn];
 
void push() 
{
    int n;
    cin>>n;
    
    vector <int> bits[n];
    for (int i=0; i<n; i++){
        int k;
        cin>>k;
        for (int j=0; j<k; j++){
            int x;
            cin>>x;
            bits[i].push_back(x);
            sum[x]++;
        }
    }
    
    bool ans = false;
    
    for (int i=0; i<n; i++){
        bool f = true;
        for (auto x: bits[i]){
            if (sum[x]==1)
            f = false;
           // cout<<sum[x]<<" ";
        }
       // cout<<"\n";
        if (f){
            cout<<"YES\n";
            ans = true;
            break;
        }
    }
    if (!ans){
        
    cout<<"NO\n";
    }
    for (int i=0; i<n; i++){
        for (auto x: bits[i])
        sum[x]--;
    }
}
 
int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
