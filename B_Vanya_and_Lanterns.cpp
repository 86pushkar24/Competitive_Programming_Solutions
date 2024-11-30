// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;
#define db double
#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n;
	db l;
	cin>>n>>l;
	db a[n+2];
	a[0]=0;
	a[n+1]=l;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+2);
	db mid,start=max(a[1],a[n+1]-a[n]),end=l;
	db ans=DBL_MAX;
	while(start<=end){
		mid=(start+end)/2;
		mid=2*mid;
		int flag=1;
		for(int i=1;i<=n+1;i++){
			if(a[i]-a[i-1]>mid){
				flag=0;
				break;
			}
		}
		mid/=2;
		if(flag==1){
			ans=min(mid,ans);
			end=mid-0.0000000001;
		}else{
			start=mid+0.0000000001;
		}
	}
	cout<<fixed<<setprecision(10)<<ans;
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

