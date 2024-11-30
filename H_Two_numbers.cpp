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
    double a,b; cin >> a >>b;
    double flr = floor((a/b));
    double cl = ceil((a/b));
    double rnd = round((a/b));

    cout << "floor " << a << " / " << b << " = " << flr << endl;
    cout << "ceil " << a << " / " << b << " = " << cl << endl;
    cout << "round " << a << " / " << b << " = " << rnd << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

