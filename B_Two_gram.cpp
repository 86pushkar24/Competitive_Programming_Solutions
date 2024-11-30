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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi = -1;
    string ans;
    map<string,int> m;
    for(int i=0; i<n-1; i++) {
        string temp = s.substr(i,2);
        m[temp]++;
    }
    for(auto it: m) {
        int sub = it.second;
        if(sub>maxi) {
            maxi = sub;
            ans = it.first;
        }
    }
    cout<<ans<<endl;
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

