// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int i,a,b,c,d;
    cin>>a>>b>>c>>d;
    int n=a*d , m=b*c;
	if(n==m) cout<<0;
	else if(n!=0 && m%n==0 || m!=0 && n%m==0) cout<<1;
	else cout<<2;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    cout << endl;
    }
}

