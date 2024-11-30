 #include <bits/stdc++.h>
// #include <stdcpp.h>
using namespace std;

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        vector<int> a(n), res(n);
        for (int i = 1; i < n; i++) cin >> a[i];
        res[0] = 5000;
        for (int i = 1; i < n; i++) res[i] = res[i-1] + a[i];
        for (auto it : res) cout << it << " ";
        cout << endl;
    }
    return 0;
}
