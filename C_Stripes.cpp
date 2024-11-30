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
	char mat[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> mat[i][j];
		}
	}
	for (int i = 0; i < 8; i++)
	{
		int cntr = 0, cntb = 0;
		for (int j = 0; j < 8; j++)
		{w
			if (mat[i][j] == 'R')
				cntr++;
			else if (mat[i][j] == 'B')
				cntb++;
		}
		if (cntr == 8)
		{
			cout << 'R' << '\n';
			return;
		}
	}
	cout << 'B' << '\n';
}

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		push();
	}
}
