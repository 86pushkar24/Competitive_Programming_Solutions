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
string a ,b; cin>>a>>b;
int x=a.length();
string c="";
for(int i=0;i<x;i++){
if(a[i]!=b[i]){
    c.push_back('1');
    }
else{
    c.push_back('0');
}
}
  cout<<c<<endl;
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

