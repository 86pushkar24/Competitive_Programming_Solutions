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

void push(){int n ; cin >> n;
    string s ; cin >> s;
    int I[n + 1] , D[n + 1];
 
    int tem = 0;
 
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '0')tem++;
 
        I[i + 1] = tem;
    }
 
    I[0] = 0;
 
    tem = 0;
 
    for(int i = n - 1 ; i >= 0 ; i--){
        D[i + 1] = tem;
        if(s[i] == '1')tem++;
    }
 
    D[0] = tem;
 
    vector<int> poF;
 
    for(int i = 0 ; i <= n ; i++){
 
        if(I[i] >= round(i/2.0) and D[i] >= round((n - i)/2.0)) poF.push_back(i);
    }
 
    int d = INT_MAX;
    int p = -1;
 
    for(int i = 0 ; i < (int)poF.size() ; i++){
 
        if(n&1){
            if(abs(n/2 - poF[i]) < d){
                d = abs(n/2 - poF[i]);
                p = poF[i]; 
            }
            if(abs(n/2 + 1 - poF[i]) < d){
                d = abs(n/2 + 1 - poF[i]);
                p = poF[i];
            }
        }else{
            if(abs(n/2 - poF[i]) < d){
                d = abs(n/2 - poF[i]);
                p = poF[i];
            }
        }
    }
 
    cout << p << '\n';
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

