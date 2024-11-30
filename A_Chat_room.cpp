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
    string s; cin>>s;
  int n=s.size();
  string a="hello";
  int j=0,ct=0;
  int m=a.size();
  bool ok=false;
  for(int i =0;i<n;i++){
    if(a[j]==s[i]){
      j++;
      ct++;
      if(ct==m){
        ok=true;
        break; 
      }
    }
  }
  if(ok)cout<<"YES" << endl;
  else cout<<"NO" << endl;
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

