#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        unordered_map<int, int> mp1, mp2;
        for (int i = 0; i < n; )
        {
            int j = i;
            while (j < n && a[i] == a[j])
            {
                j++;
            }
            mp1[a[i]] = max(mp1[a[i]], j - i);
            i = j;
        }
        for (int i = 0; i < n; )
        {
            int j = i;
            while (j < n && b[i] == b[j])
            {
                j++;
            }
            mp2[b[i]] = max(mp2[b[i]], j - i);
            i = j;
        }

        int ans = 0;
        for (const auto& [key, value] : mp1)
        {
            ans = max(ans, value + mp2[key]);
        }
        for (const auto& [key, value] : mp2)
        {
            ans = max(ans, value + mp1[key]);
        }
        
        cout << ans << endl;
    }
}