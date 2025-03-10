#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (abs(v[i] - v[i - 1]) % 2 == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}

// Time Complexity: O(N)
// Space Complexity: O(N)