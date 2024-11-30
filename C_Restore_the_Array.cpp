#include<bits/stdc++.h>
// #include<stdcpp.h>

typedef long long int ll;
#define arr(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
#define pb push_back
#define int ll
#define endl '\n'
using namespace std;
 
signed main() {
ios::sync_with_stdio(false); cin.tie(0);
int tc=1;
cin>>tc;
while(tc--)
{
  int n; cin>>n;
  int a[n-1];

  vector<int>ans;
  arr(a,n-1);
  
  ans.pb(a[0]);
  for(int i=1;i<n-1;i++) a[i]>a[i-1] ?  ans.pb(a[i-1]) : ans.pb(a[i]);
  ans.pb(a[n-2]);
  for(auto& i:ans) cout<<i<<" ";

    cout<<endl;
}
 return 0;
}
