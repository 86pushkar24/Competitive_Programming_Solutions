// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
   int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int q;
	cin >> q;
	while(q--)
	{
		int x;
		cin >> x;
		auto p = upper_bound(a.begin(), a.end(), x);
		cout << p - a.begin() << "\n";
	}

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
