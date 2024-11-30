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
    int n,h;
    cin>>n>>h;
    int arr[n];
    int c=0;
    for(int i=0;i<n;++i)
    cin>>arr[i];
    for(int i=0;i<n;++i){
        if(arr[i]<=h)
        c++;
        else
        c+=2;
    }
    cout<<c;
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

