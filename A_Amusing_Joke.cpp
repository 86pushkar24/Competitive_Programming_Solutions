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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string t;
    t = s1+s2;
    sort(t.begin(),t.end());
    sort(s3.begin(),s3.end());
    if(t==s3) cout<<"YES\n";
    else cout<<"NO\n";
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

