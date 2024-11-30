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
    int n; cin>>n;
		map<int, int>mp;
		for(int i = 0; i < n; i++){
			int c; cin>>c;
			mp[c] = i + 1;
		}
		vector<int>a;
		for(auto it = mp.begin(); it != mp.end(); it++){
			a.push_back((*it).first);
		}
		int ans = -1;
		if(mp[1] != 0){
			ans = mp[1] * 2;
		}
		for(int i = 0; i < a.size(); i++)
		for(int j = i; j < a.size(); j++){
			if(gcd(a[i], a[j]) == 1) ans = max(ans, mp[a[i]] + mp[a[j]]);
		}
		cout<<ans<<"\n";
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

