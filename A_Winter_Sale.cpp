// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    double d , p;
    cin >> d >> p;
    double x;
    x = p/(1.0000-(d/100.0000));
    cout  << setprecision(2) << double(x) ;
}

signed main()
{
    ios::sync_with_stdio(false);`
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

