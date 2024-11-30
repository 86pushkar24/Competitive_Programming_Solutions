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

void push()
{
    int n,p,q;cin>>n>>p;
    int count=0;
    int arr[2500];
    for(int i=0;i<p;i++)cin>>arr[i];
    cin>>q;
    for(int i=p;i<p+q;i++)cin>>arr[i];
    sort(arr,arr+(p+q));
    for(int i=0;i<p+q;i++){
        if(arr[i]!=arr[i+1])count++;
    }
    if(count==n)cout<<"I become the guy."<<'\n';
    else cout<<"Oh, my keyboard!"<<'\n';
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
