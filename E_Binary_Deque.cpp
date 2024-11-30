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
int n , m ; cin >> n >> m;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	int i = 0 , j = 0 , cnt1 = 0;
	int kj = n - 1 , ki = 0;
	while(v[kj] == 0 and kj < n){
		kj--;
	}
	while(v[ki] == 0 and ki < n){
		ki++;
	}
	while(cnt1 < m and j < n){
		if(v[j] == 1){
			if(cnt1 + 1 == m){
				cnt1++;
				j++;
				while(v[j] == 0 and j < n)j++;
				break;
			}else{
				j++;
				cnt1++;
			}
		}else{
			j++;
		}
	}
	if(cnt1 < m){
		cout << -1 << '\n';
		return;
	}
	//cout << j << '\n';
	int ans = n - j;
	//cout << ans << ' ' << cnt1 << '\n';
	//cout << ki << ' ' << kj << '\n';
	//cout << j << '\n';
	//return;
	while(j < n){
		while(j < n){
			if(v[j] == 1){
				cnt1++;
				j++;
				while(v[j] == 0 and j < n)j++;
				break;
			}
			j++;
		}
		//cout << cnt1 << ' ' << j << '\n';
		while(i < n and cnt1 > m){
			if(v[i] == 1)cnt1--;
			i++;
		}
		//cout << cnt1 << ' ' << i << '\n';
		//break;
		int t1 = (i >= ki ? i  : 0);
		int t2 = (j <= kj ? n - j : 0);
		//cout << t1 << ' '<< t2 << ' ' << i << ' ' << j << '\n';
		//cout << t1 << ' ' << t2 << '\n';
		ans = min(ans , t1 + t2);
	}
	cout << ans << '\n';
 
	
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

