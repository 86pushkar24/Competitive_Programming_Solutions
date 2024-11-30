// @prefix cpp
// @description

#include <stdcpp.h>
// #include <bits/stdc++.h>
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

/*
    define starts here
*/

#define INP(arr, n) for (int a = 0; a < n; a ++) cin >> arr[a]
#define endl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define si set<int>
#define mii map<int, int>
#define pb push_back
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())

/*
    constants starts here
*/

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
const int MAXN = 1e5 + 5;
/*
    functions starts here
*/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    a %= b;
    return gcd(b, a);
}

int binpow(int x, int y, int m)
{
    int res = 1;
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

/*
    Pushkar 
            Gupta's
                        Solution
                Start's
        Here
*/

vi pi;
si stt;
bitset<MAXN + 5> chk;

void seive() {
    chk.set();
    chk[0] = chk[1] = 0;
    for (int i = 2; i <= sqrt(MAXN) + 2; i++) {
        if (chk[i]) {
            pi.push_back(i*i);
            stt.insert(i*i);
            for (int j = i*i; j <= MAXN; j += i) chk[j] = 0;
        }
    }
    for (int i = sqrt(MAXN)+3; i < MAXN; i++) {
        if (chk[i]) {
            pi.push_back(i * i);
            stt.insert(i * i);
        }
    }
}

void push() {
    int n,a(4);
    cin >> n;
    for (auto b : pi) {
        int c = n - a - b;
        if (stt.count(c) == 0) continue;
        if (a != b && b != c && a != c && a + b + c == n) {
            yes
            return;
        }
    }
    no
}

/*
    Pushkar 
            Gupta's
                        Solution
                End's
        Here
*/

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    seive();
    while(tc--) push();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
