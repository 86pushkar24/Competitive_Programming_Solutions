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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (__gcd(a[i], a[j]) <= 2)
                {
                    cout << "Yes" << endl;
                    goto end;
                }
            }
        }
        cout << "No" << endl;
    end:;
    }
    return 0;
}