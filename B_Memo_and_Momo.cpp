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
    int a,b,k;cin >>a >>b >>k;
    if(a%k==0 && b%k==0) cout << "Both" << endl;
    else if(a%k==0 && b%k!=0) cout << "Memo" << endl;
    else if(a%k!=0 && b%k==0) cout << "Momo" << endl;
    else cout << "No One" << endl;
    
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

