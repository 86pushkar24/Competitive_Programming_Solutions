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
    int k,m,n;
    cin >> n >> m;
    k=0;
    while(1){
        if(n>=m){
            k+=m;
            n-=m;
            n++;
        }
        else{
            k+=n;
            break;
        }
    }
    cout<<k;
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

