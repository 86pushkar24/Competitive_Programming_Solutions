#include "bits/stdc++.h"
using namespace std;

using i64 = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

struct SegmentTree
{
    vector<int> t;
    int n;

    SegmentTree(int n) : n(n)
    {
        t.resize(4 * n);
    }

    void build(vector<int> &a, int v, int tl, int tr)
    {
        if (tl == tr)
        {
            t[v] = a[tl];
        }
        else
        {
            int tm = (tl + tr) / 2;
            build(a, 2 * v, tl, tm);
            build(a, 2 * v + 1, tm + 1, tr);
            t[v] = min(t[2 * v], t[2 * v + 1]);
        }
    }

    int query(int v, int tl, int tr, int l, int r)
    {
        if (l > r)
        {
            return n + 1;
        }
        if (tl == l && tr == r)
        {
            return t[v];
        }
        int tm = (tl + tr) / 2;
        return min(query(2 * v, tl, tm, l, min(r, tm)),query(2 * v + 1, tm + 1, tr, max(l, tm + 1), r));
    }
};

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N + 1);
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
        }

        int v = 0;
        for (int i = N; i >= 1; i--)
        {
            if (A[i] != 0)
            {
                v = A[i];
                break;
            }
        }
        if (v == 0)
        {
            v = 1;
        }
        for (int i = 1; i <= N; i++)
        {
            if (A[i] == 0)
            {
                A[i] = v;
            }
        }

        vector<int> first(N + 1, N + 1);
        vector<int> last(N + 1, 0);
        for (int i = 1; i <= N; i++)
        {
            if (first[A[i]] == N + 1)
            {
                first[A[i]] = i;
            }
            last[A[i]] = i;
        }

        vector<int> val(N + 1, N + 1);
        for (int k = 1; k <= N; k++)
        {
            if (last[A[k]] == k)
            {
                val[k] = first[A[k]];
            }
        }

        SegmentTree st(N);
        st.build(val, 1, 1, N);

        int cnt = 0;
        for (int i = 1; i < N; i++)
        {
            int min_first = st.query(1, 1, N, i + 1, N);
            if (min_first > i)
            {
                cnt++;
            }
        }

        cout << cnt + 1 << "\n";
    }
}