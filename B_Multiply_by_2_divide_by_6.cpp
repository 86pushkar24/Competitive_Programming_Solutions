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
    long long n;
	cin>>n;
	int f = 0 , ans = 0;
	while(1)
	{
	    if(n==1)
	    break;
	    if(n%3!=0)
	    {
	        f = 1;
	        break;
	    } else {
	        if(n%6==0)
	        {
	            n=n/6;
	            ans++;
	        } else{
	            n = n*2;
	            ans++;
	        }
	    }
	}
    if(f==1){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
	    
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

