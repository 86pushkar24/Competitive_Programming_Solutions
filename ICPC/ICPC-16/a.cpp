#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<ll> v1(n);
        vector<ll> v2(n);
        for (int i = 0; i < n; ++i)
            scanf("%lld", &v1[i]);
        for (int i = 0; i < n; ++i)
            scanf("%lld", &v2[i]);
        ll mn = *min_element(v2.begin(), v2.end());
        vector<ll> v3;
        for (int i = 0; i < n; ++i)
            if (v2[i] == mn)
                v3.push_back(v1[i]);
        sort(v1.begin(), v1.end());
        sort(v3.begin(), v3.end());
        ll sm(0);
        for (int i = 0; i + 1 < v3.size(); ++i)
            sm += mn * (v3[i + 1] - v3[i]);
        ll ans(sm);
        for (int i = 0; i < n; ++i)
        {
            if (v2[i] != mn)
            {
                ll k = v1[i];
                auto it = lower_bound(v3.begin(), v3.end(), k);
                ll mn2 = LLONG_MAX;
                if (it != v3.end())
                    mn2 = min(mn2, *it - k);
                if (it != v3.begin())
                {
                    it--;
                    mn2 = min(mn2, k - *it);
                }
                ans += mn * mn2;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
