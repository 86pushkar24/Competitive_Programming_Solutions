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
    int n ; cin >> n;
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
		if(a < 0){
			a *= -1;
		}
	}
	int ans = 0;
	for(auto a : v){
		ans += a;
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

