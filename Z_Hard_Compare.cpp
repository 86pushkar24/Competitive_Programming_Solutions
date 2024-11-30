// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


int power(int base,int exponent){
    int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 ==1)
        {
            result = result * base;

        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

void clear(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int p1 = power(a,b);
    int p2 =  power(c,d);
    // cout << p1 << endl <<p2 << endl;
    if (p1 > p2)
    {
        cout << "YES";
    }
    else cout << "NO";
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

