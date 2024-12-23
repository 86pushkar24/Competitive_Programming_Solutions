#include <bits/stdc++.h>
using namespace std;

#define int long long

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, m, q;
        cin >> n >> m >> q;

        vector<long long> a(n + 1), d(n + 1), l(m + 1);

        for (long long i = 1; i <= n; i++)
            cin >> a[i];
        for (long long i = 1; i <= n; i++)
            cin >> d[i];
        for (long long i = 1; i <= m; i++)
            cin >> l[i];

        vector<pair<long long, long long>> intervals;
        for (long long i = 1; i <= n; i++)
        {
            intervals.push_back({d[i] - a[i], d[i]});
        }

        sort(intervals.begin(), intervals.end());

        long long mini = intervals.back().first;
        for (long long i = n - 2; i >= 0; i--)
        {
            if (intervals[i].second > mini)
            {
                long long diff = intervals[i].second - intervals[i].first;
                intervals[i].second = mini;
                intervals[i].first = mini - diff;
            }
            mini = min(mini, intervals[i].first);
        }

        vector<long long> prefixSum;
        long long accumulated = 0;
        long long idx = 1;

        while (true)
        {
            if (idx > m)
                break;

            if (intervals.empty() || accumulated + l[idx] <= intervals[0].first)
            {
                accumulated += l[idx];
                prefixSum.push_back(accumulated);
                idx++;
            }
            else
            {
                accumulated += intervals[0].second - intervals[0].first;
                intervals.erase(intervals.begin());
            }
        }

        while (q--)
        {
            long long x;
            cin >> x;

            long long left = 0, right = prefixSum.size() - 1;
            long long answer = -1;

            while (left <= right)
            {
                long long mid = (left + right) / 2;

                if (x >= prefixSum[mid])
                {
                    answer = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }

            cout << answer + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}
