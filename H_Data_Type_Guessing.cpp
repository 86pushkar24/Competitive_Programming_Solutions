// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>
#include <typeinfo>
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n,k,a;
    cin >> n>>k>>a;
    int res = (n*k)/a;
    cout << typeid(res).name() << endl;
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

