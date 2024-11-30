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
	}
	int ans = 0;
	for(auto a : v){
		ans += a;
	}
	if(ans % 3 == 0){
		cout << 0 << '\n';
		return;
	}
	int t = 5;
	for(auto a : v){
		if((ans - a) % 3 == 0){
			t = 1;
			break;
		}
	}
	int tem = 3 - (ans % 3);
	cout << min(t , tem) << '\n';
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

