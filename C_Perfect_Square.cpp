// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

#define Pair pair<int,int>
#define pb push_back
typedef long long ll;
const int N = 1010;
ll mod = 1e9 + 7;
 
ll n, m, ans = 0;
string s;
char a[N][N],b[N][N];
 
void push(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			b[j][n-i+1]=a[i][j];
		}
	}
	ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			char maxn=a[i][j];
			ll nx=i,ny=j;
			for(int k=1;k<=4;k++){
				ll p=nx;
				nx=ny;
				ny=n-p+1;
				maxn=max(maxn,a[nx][ny]);
			}
			// cout<<nx<<" "<<ny<<"\n";
			// cout<<maxn<<"\n";
			ans+=(maxn-a[i][j]);
			for(int k=1;k<=3;k++){
				ll p=nx;
				nx=ny;
				ny=n-p+1;
				// cout<<maxn<<" "<<a[nx][ny]<<"\n";
				ans+=(maxn-a[nx][ny]);
			}
			// cout<<ans<<"\n";
		}
	}
	cout<<ans/4<<"\n";
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

