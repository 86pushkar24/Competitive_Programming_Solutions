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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    unordered_map<int, int> freq1, freq2, freq;

    for (auto &v : a)
        cin >> v;
    for (auto &v : b)
    {
        cin >> v;
        freq1[v]++;
    }

    int sum = 0, res = 0;

    for (int i = 0; i < m; i++)
    {
        freq2[a[i]]++;
        int newfreq = min(freq1[a[i]], freq2[a[i]]);
        sum = sum - freq[a[i]] + newfreq;
        freq[a[i]] = newfreq;
    }

    if (sum >= k)
        res++;

    for (int i = m; i < n; i++)
    {
        freq2[a[i]]++;
        freq2[a[i - m]]--;

        int newfreq = min(freq1[a[i]], freq2[a[i]]);
        sum = sum - freq[a[i]] + newfreq;
        freq[a[i]] = newfreq;

        newfreq = min(freq1[a[i - m]], freq2[a[i - m]]);
        sum = sum - freq[a[i - m]] + newfreq;
        freq[a[i - m]] = newfreq;

        if (sum >= k)
            res++;
    }

    cout << res << "\n";
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
