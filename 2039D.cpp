#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + m, greater<int>());
        vector<int> v[n + 2];
        int b[n + 2];
        bool f = true;
        for (int i = 1; i <= n; i++)
        {
            b[i] = 0;
            for (auto j : v[i])
            {
                if (j == b[i])
                {
                    b[i]++;
                }
            }
            for (int j = 2 * i; j <= n; j += i)
            {
                v[j].push_back(b[i]);
            }
            if (b[i] >= m)
            {
                f = false;
                break;
            }
        }
        if (!f)
        {
            cout << "-1\n";
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[b[i]] << ' ';
            }
            cout << '\n';
        }
    }
}
