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
        vector<int> v(n);
        int cnt_2 = 0, ans(-1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 2)
            {
                cnt_2++;
            }
        }
        int pre_2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 2)
            {
                pre_2++;
            }
            if (pre_2 == cnt_2 - pre_2)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
}

// Time Complexity: O(N) = 0(1000)
