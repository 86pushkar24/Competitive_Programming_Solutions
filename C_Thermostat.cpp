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

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
int t;
cin>>t;

while(t--)
{
  int l,r,x,a,b;
  
  cin >> l >> r >> x;
  cin >>a >> b;
  
  
  if(a == b)
  {
    cout << "0" <<'\n';
    continue;
  }
  
  int ans = -1;
   
   
  if(a > b)
  {
      swap(a , b);
  }
  
  if(b - a >= x)
   ans = 1;
   
  else if(r - b >= x || (b - l >= x && a - l >= x))
  ans = 2;
  
  else if(r - a >= x && r - l >= x && b - l >= x)
  ans = 3;
  
  cout << ans <<'\n';
  
  
}   
   return 0;
}

