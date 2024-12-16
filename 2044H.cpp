#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<vector<long long>> M(n + 1, vector<long long>(n + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> M[i][j];
            }
        }
        vector<vector<long long>> P(n + 1, vector<long long>(n + 1, 0)), Pr(n + 1, vector<long long>(n + 1, 0)), Pc(n + 1, vector<long long>(n + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            long long rs = 0, rsr = 0, rsc = 0;
            for (int j = 1; j <= n; j++)
            {
                rs += M[i][j];
                rsr += M[i][j] * i;
                rsc += M[i][j] * j;
                P[i][j] = P[i - 1][j] + rs;
                Pr[i][j] = Pr[i - 1][j] + rsr;
                Pc[i][j] = Pc[i - 1][j] + rsc;
            }
        }
        auto sum2D = [&](auto &A, int x1, int y1, int x2, int y2)
        {
            return A[x2][y2] - A[x1 - 1][y2] - A[x2][y1 - 1] + A[x1 - 1][y1 - 1];
        };
        long long prev = 0, length = 0;
        for (int _q = 0; _q < q; _q++)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            long long S_sub = sum2D(P, x1, y1, x2, y2);
            long long Sr_sub = sum2D(Pr, x1, y1, x2, y2);
            long long Sc_sub = sum2D(Pc, x1, y1, x2, y2);
            long long w = (y2 - y1 + 1);
            long long sumK = w * Sr_sub + Sc_sub + (1 - w * x1 - y1) * S_sub;
            long long ans = prev + length * S_sub + sumK;
            cout << ans << (_q == q - 1 ? '\n' : ' ');
            prev = ans;
            length += (x2 - x1 + 1) * w;
        }
    }
}
