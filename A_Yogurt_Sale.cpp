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
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int cst;
    if(n%2==0){
        cst =b*(n/2);
    }
    else{
        cst =(b*(n/2)) +a;
    }
    cout<<min(a*n,cst);
    cout<<endl;
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
