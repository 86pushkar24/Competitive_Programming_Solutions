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
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    int cnt_zero=0;
    int cnt_one=0;
    for(auto i : v){
        if(i==0) cnt_zero++;
        else if(i==1) cnt_one++;
    }
    if(cnt_zero<=((n+1)/2)) cout <<  "0" << endl;
    else if((cnt_one+cnt_zero)==n && cnt_one>0) cout <<  "2" << endl;
    else cout <<  "1" << endl;
    }

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

