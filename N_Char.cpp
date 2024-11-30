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
    // char res2 =  char(x -= 32);
    if(65 <= x && x<= 90){
    char res1 = char(x += 32);
    cout << res1 << endl;  
    } 
    else if(97 <= x && x<= 122){
    char res2 = char(x -= 32);
     cout << res2 << endl;
    }
    else cout << " ";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

