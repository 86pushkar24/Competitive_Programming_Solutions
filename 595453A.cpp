#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Frequency array (assuming elements are 1 to 500 based on test cases)
        vector<int> freq(501, 0);
        int distinct = 0; // Number of distinct elements
        i64 ans = 0;      // Total count of diverse subarrays
        int left = 0;     // Left pointer of the sliding window

        for (int right = 0; right < n; right++)
        {
            // Add the new element at right
            freq[a[right]]++;
            if (freq[a[right]] == 1)
            {
                distinct++;
            }

            // Shrink window if max frequency exceeds distinct count
            while (freq[a[right]] > distinct && left <= right)
            {
                freq[a[left]]--;
                if (freq[a[left]] == 0)
                {
                    distinct--;
                }
                left++;
            }

            // All subarrays ending at right with current left are valid
            ans += (right - left + 1);
        }

        cout << ans << '\n';
    }
    return 0;
}