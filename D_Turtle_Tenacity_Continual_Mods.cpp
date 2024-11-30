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
	for(auto &a : v) cin >> a;
	sort(v.begin() , v.end());
	int cntM = 0;
	for(auto a : v){
		if(a == v[0])cntM++;
	}
	if(cntM > 1){
		int mc = INT_MAX;
		for(auto a : v){
			if(a % v[0] != 0){
				mc = min(mc , a % v[0]);
			}
		}
			int cntMc = 0;
			for(auto a : v){
				if(a == mc)cntMc++;
			}
			//cout << cntMc << ' ' << mc << '\n';
			if(cntMc > 1 or mc == INT_MAX)cout << "NO" << '\n';
			else cout << "YES" << '\n';
	}else{
		cout << "YES" << '\n';
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

