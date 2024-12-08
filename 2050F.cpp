#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAXN = 200005;
const int LOGN = 18;
int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }

long long st[MAXN][LOGN]; // Sparse table
long long diff[MAXN];     // Differences array
int n;                    // Length of the array

void build_sparse_table(int n)
{
    for (int i = 1; i <= n - 1; ++i)
    {
        st[i][0] = diff[i];
    }
    for (int k = 1; (1 << k) <= n - 1; ++k)
    {
        for (int i = 1; i + (1 << k) - 1 <= n - 1; ++i)
        {
            st[i][k] = gcd(abs(st[i][k - 1]), abs(st[i + (1 << (k - 1))][k - 1]));
        }
    }
}

long long query(int l, int r)
{
    int len = r - l;
    if (len == 0)
        return 0;
    int k = 31 - __builtin_clz(len); // Floor of log2(len)
    return abs(gcd(st[l][k], st[r - (1 << k)][k]));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> n >> q;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n - 1; ++i)
        {
            diff[i] = a[i + 1] - a[i];
        }
        build_sparse_table(n);

        vector<long long> answers;
        for (int i = 0; i < q; ++i)
        {
            int l, r;
            cin >> l >> r;
            if (l == r)
            {
                answers.push_back(0);
            }
            else
            {
                long long g = query(l, r);
                answers.push_back(g);
            }
        }
        // Output answers for the test case
        for (size_t i = 0; i < answers.size(); ++i)
        {
            cout << answers[i];
            if (i + 1 < answers.size())
                cout << " ";
        }
        cout << '\n';
    }
    return 0;
}
