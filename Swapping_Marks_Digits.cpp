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
    string a, b;
    cin >> a >> b;
    string a1 = a;
    string b1 = b;
    reverse(a1.begin(), a1.end());
    reverse(b1.begin(), b1.end());
    if (a>b || a1 > b || a1 > b1 || a > b1) cout << "Yes" << endl;
    else cout << "No" << endl;
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

