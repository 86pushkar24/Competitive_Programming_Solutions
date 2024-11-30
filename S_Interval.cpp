// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    double x;cin >>x;
    if(x>=0 && x<= 25) cout << "Interval [0,25]";
    else if(x>25 && x<= 50) cout << "Interval (25,50]";    
    else if(x>50 && x<=75) cout << "Interval (50,75]";
    else if(x>75 && x<=100) cout << "Interval (75,100]";
    else cout << "Out of Intervals";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

