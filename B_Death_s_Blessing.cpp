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
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &i : a)cin >> i;
    for(auto &i : b)cin >> i;
    cout << accumulate(a.begin(),a.end(),0ll) + accumulate(b.begin(),b.end(),0ll) - *max_element(b.begin(), b.end()) << endl;
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

