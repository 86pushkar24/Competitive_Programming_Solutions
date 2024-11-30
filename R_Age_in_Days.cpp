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
    int x; cin >>x;
    int years = x / 365;
    x -= (365*years);
    int months = x/30;
    x -= (months*30);
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << x << " days" << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

