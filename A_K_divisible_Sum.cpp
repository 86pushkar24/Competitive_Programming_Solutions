// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int a,b;
    cin >> a >> b;
    int maxi = max(a,b);
    int mini = min(a, b);
    if(b % a == 0){
        cout << maxi / mini << endl;
    }
    else if(b>a){
        cout << b / a + 1 << endl;
    }
    else{
        if(a%b == 0)
            cout << 1 << endl;
            else
        cout << 2 << endl;
    }
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

