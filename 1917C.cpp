#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long n, m, k, d, c = 0;
        cin >> n >> k >> d;
        long long arr[n], a[k], a1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a1[i] = arr[i];
            if (a1[i] == 1 + i)
            {
                c++;
            }
        }
        long long mx = c + (d - 1) / 2;
        for (int i = 0; i < k; i++)
        {

            cin >> a[i];
        }
        for (int j = 0; j < (int)min(n * 2LL,d); j++)
        {
            long long c = 0;
            for (int i = 0; i < a[j % k]; i++)
            {
                a1[i]++;
                if (a1[i] == i + 1)
                {
                    c++;
                }
            }
            for (int i = a[j % k]; i < n; i++)
            {
                if (a1[i] == 1 + i)
                {
                    c++;
                }
            }
            if ((d - j - 2) >= 0)
            {
                mx = max(mx, c + (d - j - 2) / 2);
            }
        }
        cout << mx << endl;
    }
    return 0;
}