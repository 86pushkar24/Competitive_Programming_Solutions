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
    int k;
    cin >>k;
    int first_digit = k % 10;
    int second_digit = k /10;
    if ((first_digit % second_digit == 0) || (second_digit % first_digit) == 0)
    {
        cout << "YES";
    }
else cout << "NO";
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

