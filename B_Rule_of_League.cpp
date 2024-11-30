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

// void push(){
    
// }

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    // push();
    int n, x, y;
	cin >> n >> x >> y;
	if(x < y) {
		swap(x, y);
	}
	if(y != 0 or x == 0 or (n - 1) % x != 0) {
		cout << "-1" << endl;
		continue;
	}
	vector<int> sol;
	int k = 1;
	for(int i = 1; i < n; i++) {
		cout << k << ' ';
		if(i % x == 0) {
			k = i + 2;
		}
	}
	cout << endl;
    }
}

