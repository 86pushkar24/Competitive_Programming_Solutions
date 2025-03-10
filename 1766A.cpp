#include "bits/stdc++.h"
using namespace std;

void precompute(vector<int> &v)
{
    for (int i = 1; i <= 999999; i++)
    {
        if (i <= 9)
        {
            v.push_back(i);
        }
        if (i <= 99)
        {
            if (i % 10 == 0)
            {
                v.push_back(i);
            }
        }
        if (i <= 999)
        {
            if (i % 100 == 0)
            {
                v.push_back(i);
            }
        }
        if (i <= 9999)
        {
            if (i % 1000 == 0)
            {
                v.push_back(i);
            }
        }
        if (i <= 99999)
        {
            if (i % 10000 == 0)
            {
                v.push_back(i);
            }
        }
        if (i <= 999999)
        {
            if (i % 100000 == 0)
            {
                v.push_back(i);
            }
        }
    }
}

int main()
{
    vector<int> v;
    precompute(v);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= n)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}