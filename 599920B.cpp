#include "bits/stdc++.h"
using namespace std;

const int MAXN = 200010;

vector<int> primes;
bool isPrime[MAXN];
int spf[MAXN];

void sieve()
{
    fill(isPrime, isPrime + MAXN, true);
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i < MAXN; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            spf[i] = i;
            for (long long j = i * i; j < MAXN; j += i)
            {
                if (isPrime[j])
                {
                    isPrime[j] = false;
                    spf[j] = i;
                }
            }
        }
    }
}

vector<int> factor(int n)
{
    vector<int> factors;
    while (n > 1)
    {
        int p = spf[n];
        factors.push_back(p);
        while (n % p == 0)
            n /= p;
    }
    return factors;
}

int findParent(vector<int> &parent, int i)
{
    if (parent[i] == i)
        return i;
    return parent[i] = findParent(parent, parent[i]);
}

void unionSets(vector<int> &parent, vector<int> &rank, int x, int y)
{
    int px = findParent(parent, x);
    int py = findParent(parent, y);
    if (px != py)
    {
        if (rank[px] < rank[py])
            swap(px, py);
        parent[py] = px;
        if (rank[px] == rank[py])
            rank[px]++;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    sieve();

    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i]--;
        }

        vector<int> parent(n);
        for (int i = 0; i < n; i++)
            parent[i] = i;
        vector<int> rank(n, 0);

        for (int p : primes)
        {
            if (p > n)
                break;
            vector<int> indices;
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= p && a[i] % p == 0)
                    indices.push_back(i);
            }
            for (int i = 1; i < indices.size(); i++)
            {
                unionSets(parent, rank, indices[0], indices[i]);
            }
        }

        vector<vector<int>> components(n);
        for (int i = 0; i < n; i++)
        {
            int p = findParent(parent, i);
            components[p].push_back(i);
        }

        vector<int> b(n, -1);
        set<int> largerComponentPrimes;

        for (int i = 0; i < n; i++)
        {
            if (components[i].size() > 1)
            {
                vector<int> C = components[i];
                sort(C.begin(), C.end());
                for (int j = 0; j < C.size(); j++)
                {
                    int next_j = (j + 1) % C.size();
                    b[C[j]] = a[C[next_j]];
                }
                for (int j : C)
                {
                    vector<int> factors = factor(a[j] + 1);
                    for (int p : factors)
                        largerComponentPrimes.insert(p);
                }
            }
        }

        int k = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                k = i;
                break;
            }
        }

        if (k != -1)
        {
            int m = 2;
            while (true)
            {
                bool good = true;
                for (int p : largerComponentPrimes)
                {
                    if (m % p == 0)
                    {
                        good = false;
                        break;
                    }
                }
                if (good)
                {
                    b[k] = m - 1;
                    break;
                }
                m++;
                if (m > MAXN)
                    m = primes.back() + 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (components[findParent(parent, i)].size() == 1 && a[i] != 0)
            {
                b[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << (b[i] + 1) << " ";
        }
        cout << "\n";
    }
}