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
    int a,b;
    char ch;
    cin >> a >> ch >> b;
    switch (ch)
    {
    case '+':
        cout << (a+b) << endl;
        break;
    case '-':
        cout << (a-b) << endl;
        break;
        case '*':
        cout << (a*b) << endl;
        break;
        case '/':
        cout << (a/b) << endl;
        break;
    default:
        break;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

