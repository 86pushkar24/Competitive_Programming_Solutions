// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int mod  = 998244353;
const int maxn = 2e5 + 69;
int power[maxn];
 
void push() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int ans = 1;
    int l = 1;
    for (int i=1; i<n; i++)
    {
        if (s[i]==s[i-1])
        l++;
        else l = 1;
        ans += power[l-1];
        ans%=mod;
    }
    cout<<ans<<"\n";
}
 
void pre()
{
    power[0] = 1;
    for (int i=1; i<maxn; i++)
    {
        power[i] = power[i-1] * 2;
        power[i] %= mod;
    }
}
 
int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    pre();
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
