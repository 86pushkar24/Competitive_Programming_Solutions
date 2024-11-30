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
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
    x=a; y=b;z=c;
    x+=min(b,c);
    y-=min(b,c);
    z-=min(b,c);
    if(abs(b-c)%2==0) cout<<1;
    else cout<<0;
    cout<<" ";
    x=a; y=b;z=c;
    y+=min(a,c);
    x-=min(a,c);
    z-=min(a,c);
    if(abs(a-c)%2==0) cout<<1;
    else cout<<0;
    cout<<" ";
    x=a; y=b;z=c;
    z+=min(a,b);
    x-=min(a,b);
    y-=min(a,b);
    if(abs(b-a)%2==0) cout<<1;
    else cout<<0;  
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

