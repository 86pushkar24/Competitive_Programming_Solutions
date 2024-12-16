#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
            r[i]--;
        }
        vector<int> indeg(n, 0);
        for (int i = 0; i < n; i++)
            indeg[r[i]]++;
        vector<int> state(n, 0);
        vector<int> cycleNodes;
        for (int i = 0; i < n; i++)
        {
            if (state[i] == 0)
            {
                int cur = i;
                while (state[cur] == 0)
                {
                    state[cur] = 1;
                    cur = r[cur];
                }
                if (state[cur] == 1)
                {
                    int start = cur;
                    do
                    {
                        cycleNodes.push_back(cur);
                        cur = r[cur];
                    } while (cur != start);
                }
                cur = i;
                while (state[cur] == 1)
                {
                    state[cur] = 2;
                    cur = r[cur];
                }
            }
        }
        vector<vector<int>> rev(n);
        for (int i = 0; i < n; i++)
        {
            rev[r[i]].push_back(i);
        }
        vector<int> dist(n, -1);
        queue<int> q;
        for (auto c : cycleNodes)
        {
            dist[c] = 0;
            q.push(c);
        }
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            for (auto &x : rev[u])
            {
                if (dist[x] == -1)
                {
                    dist[x] = dist[u] + 1;
                    q.push(x);
                }
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (dist[i] > mx)
                mx = dist[i];
        }
        cout << mx + 2 << "\n";
    }
}
