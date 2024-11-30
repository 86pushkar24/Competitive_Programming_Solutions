// @prefix cpp
// @description
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// #include <stdcpp.h>
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define INP(arr, n) for (int i = 0; i < n; i ++) cin >> arr[i]
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vb vector<bool>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int> 
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())

int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
int binpow(int x, int y, int m)
{
    int res(1);
    x = x % m;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}

// Pushkar Gupta's Solution Start's Here

// Calculating SPF (Smallest Prime Factor) for every
// number till N.
// Time Complexity : O(nloglogn)
const int N = 1e7 + 1;
int spf[N];

void sieve()
{
    for (int i = 1; i < N; i++) spf[i] = i;
    for (int i = 2; i * i < N; i++) if (spf[i] == i) for (int j = i; j < N; j += i) if (spf[j] == j) spf[j] = i;
}
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
void push()
{
    int l, r;
    cin >> l >> r;

    int difference = r - l;

    vector<int> primes;

    while (difference != 1)
    {
        int p = spf[difference];
        primes.push_back(p);

        while (difference % p == 0)
            difference /= p;
    }

    if (primes.size() == 0)
        cout << -1 << "\n";
    else
    {
        int answer = 1e9;
        for (auto &i : primes)
        {
            answer = min(answer, (l + i - 1) / i * i - l);
        }
        cout << answer << "\n";
    }
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int tc = 1;
    cin >> tc;
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
/**
 * 
 * +-----+-----------------+
 * |  n  | Worst Algorithm |
 * +-----+-----------------+
 * | 11  | O(n!), O(n^6)   |
 * | 18  | O(2^n * n^2)    |
 * | 22  | O(2^n * n)      |
 * | 100 | O(n^4)          |
 * | 400 | O(n^3)          |
 * | 2K  | O(n^2 log n)    |
 * | 10K | O(n^2)          |
 * | 1M  | O(n log n)      |
 * +-----+-----------------+
 *
 * Lower Bound: First >=, Upper Bound: First >
 **/
