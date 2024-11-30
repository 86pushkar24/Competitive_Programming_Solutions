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
    int n, m;
	cin >> m >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int sol = INT_MAX;
	for(int i = 0; i < n - m + 1; i++)
	{
		sol = min(sol, a[m + i - 1] - a[i]);
	}
	cout << sol << endl;
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

