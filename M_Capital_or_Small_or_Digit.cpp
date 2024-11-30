// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
// #define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    char ch;
    cin >> ch;
    int x = int(ch);
    // cout << x << endl;
    if(48 <= x && x <= 57) cout << "IS DIGIT" << endl;
    if(65 <= x && x<= 90) cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    if(97 <= x && x<= 122) cout << "ALPHA" << endl << "IS SMALL" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

