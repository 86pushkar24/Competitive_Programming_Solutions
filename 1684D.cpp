#include <bits/stdc++.h>
using namespace std;
#define int long long

const int INF = LLONG_MAX;
vector<int> fenwick(200001);
int n, k;

void update(int idx, int val)
{
    while (idx <= n)
    {
        fenwick[idx] += val;
        idx += (idx & -idx);
    }
}

int query(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += fenwick[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> arr(n + 1);
        int totalSum = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            totalSum += arr[i];
        }

        if (k == n)
        {
            cout << 0 << "\n";
            continue;
        }

        vector<pair<int, int>> worstcase;
        for (int i = 1; i <= n; i++)
        {
            worstcase.push_back({arr[i] + i, -i});
        }

        int result = 0;
        sort(worstcase.begin(), worstcase.end(), greater<pair<int, int>>());

        for (int i = 0; i < n; i++)
        {
            if (i < k)
            {
                update(-worstcase[i].second, 1);
            }
            else
            {
                result += arr[-worstcase[i].second] + query(-worstcase[i].second);
            }
        }

        cout << result << "\n";
        fill(fenwick.begin(), fenwick.begin() + n + 1, 0);
    }
    return 0;
}
