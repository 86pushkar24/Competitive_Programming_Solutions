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
    long long n, k;
	cin >> n >> k;
	long long start = 1, end = 1e10;
	long long mid;
	long long sol = 0;
	while(start <= end)
	{
		mid = (start + end) / 2ll;
		long long ans = mid - (long long)(mid / n);
		if(ans > k)
		{
			end = mid - 1;
		}
		else if(ans < k)
		{
			start = mid + 1;
		}
		else
		{
			sol = mid;
			end = mid - 1;
		}
	}
	cout << sol << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
	cout.precision(10);
    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

