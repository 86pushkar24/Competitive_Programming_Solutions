// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    vector<int> r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    int sum = 0;
    int ans = 2e9;
    int allsum = 0;
    multiset<int> lens;
    for (int i = 0; i < n; i++)
    {
        int len = r[i] - l[i] + 1;
        lens.insert(len);
        allsum += len;
        sum += len;
        while (sum - *lens.begin() >= k)
        {
            int skip = sum - k;
            if (skip < len && skip >= 0)
            {
                int cost = r[i] - skip + lens.size() * 2;
                ans = min(ans, cost);
            }
            sum -= *lens.begin();
            lens.erase(lens.begin());
        }
        int skip = sum - k;
        if (skip < len && skip >= 0)
        {
            int cost = r[i] - skip + lens.size() * 2;
            ans = min(ans, cost);
        }
    }
    if (allsum < k)
        ans = -1;
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
