// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define arr(a,n)  for(int i=0;i<(n);i++) cin>>a[i];

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n;
    cin>>n;
    vector<int>a(n);
    arr(a, n)
    int x = a[0];
    int c = 0, ans = 1e9;
    vector<int>v;
    for(int i=0;i<n;i++){
    	if(a[i]==x){
    		c++;
    	}
    	else{
    		ans = min(ans, c);
    		c = 0;
    	}
    }
    ans = min(ans, c);
    if (ans==n)	cout<<-1<<endl;
    else
    	cout<<ans<<endl;
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

