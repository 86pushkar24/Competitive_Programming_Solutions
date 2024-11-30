// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n; cin>>n;
    string x[n];
    map<string,int>mp;
   for(int i=0;i<n;i++)
   {
       cin>>x[i];
       mp[x[i]]++;
   }
   int mx=-1;
   for(int i=0;i<n;i++)
   {
       mx=max(mx,mp[x[i]]);
   }
   for(int i=0;i<n;i++)
   {
       if(mp[x[i]]==mx)
       {
           cout<<x[i];
           break;
       }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

