#include<bits/stdc++.h>
using namespace std;
int n, a[3];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++)
			cin >> a[j];
		sort(a, a + 3);
		if (a[0] == a[1] && a[1] == a[2]) {
			cout << "YES" << endl;
			continue;
		}
		else if (a[0] == a[1] && a[1] * 2 == a[2]) {
			cout << "YES" << endl;
			continue;
		}
		else if (a[1] == a[2] && a[0] * 2 == a[2]) {
			cout << "YES" << endl;
			continue;
		}
		else if (a[0] * 3 == a[2]&& a[0] * 2 == a[1] ||
			a[0] == a[1] && a[1] * 3 == a[2]||
			a[0] == a[1] && a[1] * 4 == a[2]) {
			cout << "YES" << endl;
			continue;
		}
		else {
			cout << "NO" << endl;
			continue;
		}
	}
	return 0;
}
