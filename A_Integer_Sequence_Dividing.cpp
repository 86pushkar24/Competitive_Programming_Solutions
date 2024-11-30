// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    ll n;
   cin>>n;
   if(n%4==0||(n-3)%4==0)
   cout<<0<<endl;
   else cout<<1<<endl;
    }
}

