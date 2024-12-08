#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i] - '0';
    }

    for (int i = n - 1; i >= 1; i--)
    {
        int idx = i;
        while (idx >= 1 && a[idx] > 0 && a[idx] - 1 > a[idx - 1])
        {
            a[idx] = a[idx] - 1;
            swap(a[idx], a[idx - 1]);
            idx--;
        }
    }
    for (int x : a)
        cout << x;
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
