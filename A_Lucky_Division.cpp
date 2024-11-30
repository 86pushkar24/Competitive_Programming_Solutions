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
    int arr[]={4,7,47,74,444,447,474,477,744,747,777};
    int n=0;cin>>n;int ct=0;
    for(int a=0;a<11;a++)
    if(n%arr[a]==0)
    // &&(n/arr[a])%2==0)
    ct++;
    else if(n==arr[a])
    ct++;
    if(ct>0)
    cout<<"YES";
    else
    cout<<"NO";
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

