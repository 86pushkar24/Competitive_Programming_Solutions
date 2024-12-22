#include <bits/stdc++.h>
using namespace std;

// We'll use 64-bit integers for safety, since lengths can be up to q ~ 2e5.
static const long long INF = LLONG_MAX / 4;

struct State
{
    long long bestMaxEnd; // minimal possible "max endpoint so far"
    long long startPos;   // where the 'last' snake is started
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    // e[i][t] = how many "+"" for snake i up to time t
    // s[i][t] = how many "-"  for snake i up to time t
    // We'll store them in (n x (q+1)) arrays.
    vector<vector<int>> e(n, vector<int>(q + 1, 0));
    vector<vector<int>> s(n, vector<int>(q + 1, 0));

    // Read events
    // Each line is "si +/-"
    // We'll read them in order t=1..q.
    for (int t = 1; t <= q; t++)
    {
        int idx;
        char sign;
        cin >> idx >> sign;
        // Convert idx to 0-based
        idx--;
        // First copy over all e[i][t] = e[i][t-1], s[i][t] = s[i][t-1]
        // then update for the snake that changes.
        for (int i = 0; i < n; i++)
        {
            e[i][t] = e[i][t - 1];
            s[i][t] = s[i][t - 1];
        }
        if (sign == '+')
        {
            e[idx][t] = e[idx][t - 1] + 1;
        }
        else
        {
            s[idx][t] = s[idx][t - 1] + 1;
        }
    }

    // Precompute E[i] = max_t e[i][t]
    vector<int> E(n, 0);
    for (int i = 0; i < n; i++)
    {
        int mx = 0;
        for (int t = 0; t <= q; t++)
        {
            mx = max(mx, e[i][t]);
        }
        E[i] = mx;
    }

    // Precompute D[i][j] = max_t ( e[i][t] - s[j][t] )
    // cost[i][j] = D[i][j] + 1
    vector<vector<long long>> cost(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            long long mx = -INF;
            for (int t = 0; t <= q; t++)
            {
                long long val = (long long)e[i][t] - s[j][t];
                if (val > mx)
                    mx = val;
            }
            cost[i][j] = mx + 1; // +1 for the strict gap
        }
    }

    // DP array: dp[mask][last] = State{bestMaxEnd, startPos}
    // We'll store bestMaxEnd in a separate array, and startPos in another
    static State dp[1 << 20][20];
    // Initialize them with INF
    for (int mask = 0; mask < (1 << n); mask++)
    {
        for (int i = 0; i < n; i++)
        {
            dp[mask][i] = {INF, INF};
        }
    }

    // Base cases: single-snake subsets
    for (int i = 0; i < n; i++)
    {
        int mask = (1 << i);
        dp[mask][i] = {1LL + E[i], 1LL};
    }

    // Iterate over all masks
    for (int mask = 0; mask < (1 << n); mask++)
    {
        // We'll pick "last" in the subset
        for (int last = 0; last < n; last++)
        {
            if (!(mask & (1 << last)))
                continue; // last not in mask
            auto [oldMaxEnd, startLast] = dp[mask][last];
            if (oldMaxEnd == INF)
                continue; // not a valid state

            // Try extending with a new snake "nx" not in mask
            int rem = ((1 << n) - 1) ^ mask; // the set of snakes not used yet
            // small optimization: iterate only over those bits in 'rem'
            for (int nx = rem; nx;)
            {
                int pick = __builtin_ctz(nx); // get rightmost set bit
                nx ^= (1 << pick);

                long long startNext = startLast + cost[last][pick];
                long long newMaxEnd = max(oldMaxEnd, startNext + E[pick]);

                int nxtMask = mask | (1 << pick);
                auto &stRef = dp[nxtMask][pick];

                // We want to take the better (smaller) bestMaxEnd
                // if tie, smaller startPos
                if ((newMaxEnd < stRef.bestMaxEnd) ||
                    (newMaxEnd == stRef.bestMaxEnd && startNext < stRef.startPos))
                {
                    stRef.bestMaxEnd = newMaxEnd;
                    stRef.startPos = startNext;
                }
            }
        }
    }

    // Final answer = min_{last} dp[(1<<n)-1][last].bestMaxEnd
    long long ans = INF;
    int fullMask = (1 << n) - 1;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, dp[fullMask][i].bestMaxEnd);
    }

    cout << ans << "\n";
    return 0;
}
