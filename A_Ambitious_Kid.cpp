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
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    int check=0;
    int p_min=INT_MAX;
    int n_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]==0){check=1;break;}
        else if(arr[i]>0){
            if(arr[i]<p_min){p_min=arr[i];}
            }
        else{
            if(arr[i]>n_max){n_max=arr[i];}
        }
    }
    if(n==1){cout<<abs(arr[0])<<endl;}
    else if(check==1){cout<<0<<endl;}
    else{cout<<min(abs(n_max),p_min)<<endl;}
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
