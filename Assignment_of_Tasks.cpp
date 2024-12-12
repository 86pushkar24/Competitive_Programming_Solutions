#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    // Total constraints:
    // 1 ≤ T ≤ 10^4
    // 1 ≤ N, M ≤ 10^5
    // sum of N and sum of M over all tests ≤ 10^5

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        vector<long long> A(N), S(N), F(M);

        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> S[i];
        for (int i = 0; i < M; i++)
            cin >> F[i];

        // Binary search over finish time T.
        // Lower bound: at least max(S[i]) since no task can start before its S[i].
        // Upper bound:
        // Let's consider a loose upper bound:
        // max(S[i]) + max(F[i]) * sum(A[i]) is a safe upper bound.
        long long maxS = 0;
        long long sumA = 0;
        for (int i = 0; i < N; i++)
        {
            maxS = max(maxS, S[i]);
            sumA += A[i];
        }
        long long maxF = 0;
        for (int i = 0; i < M; i++)
        {
            maxF = max(maxF, F[i]);
        }

        long long left = maxS, right = maxS + maxF * sumA;

        auto can = [&](long long T)
        {
            // Check feasibility with given time T
            // We'll assign tasks to workers in a non-decreasing manner.
            int widx = 0;                  // current worker index
            long long workerAvailable = 0; // earliest start time for current worker
            for (int i = 0; i < N; i++)
            {
                long long startTime = max(S[i], workerAvailable);
                long long finishTime = startTime + F[widx] * A[i];
                if (finishTime <= T)
                {
                    // Assign this task to current worker
                    workerAvailable = finishTime;
                }
                else
                {
                    // Need next worker
                    // widx++;
                    // if (widx >= M)
                    //     return false;
                    // // Start task on new worker
                    // long long newStart = max(S[i],0LL); // new worker hasn't done anything yet
                    // long long newFinish = newStart + F[widx] * A[i];
                    // if (newFinish > T)
                    //     return false; // can't complete even with a fresh worker
                    // workerAvailable = newFinish;
                    widx++;
                    if (widx >= M)
                        return false;

                    // New worker, no tasks yet
                    workerAvailable = 0;

                    long long newStart = max(S[i], workerAvailable);
                    long long newFinish = newStart + F[widx] * A[i];
                    if (newFinish > T)
                        return false;
                    workerAvailable = newFinish;
                }
            }
            return true;
        };

        // Binary search
        while (left < right)
        {
            long long mid = (left + right) / 2;
            if (can(mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << left << "\n";
    }

    return 0;
}
