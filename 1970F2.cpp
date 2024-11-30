/*                                          जय श्री राधे कृष्णा।                                                         */

#include "bits/stdc++.h"
using namespace std;

// Macros
#define int long long
#define endl '\n'
#define for0(i,n)for(int i=0;i<n;++i)
#define for1(i,n)for(int i=1;i<=n;++i)
#define fl(a,b)for(int i=a;i<(b);++i)
#define rfl(a,b)for(int i=a;i>=(b);--i)

#define lbound(v, x) lower_bound(v.begin(),v.end(),x)-v.begin()
#define ubound(v, x) upper_bound(v.begin(),v.end(),x)-v.begin()
#define mne(v) *min_element(v.begin(),v.end())
#define mxe(v) *max_element(v.begin(),v.end())

#define yes cout<<"YES"<<endl;
#define no cout << "NO" << endl;
#define cy(x){if(x)yes else no}

#define aint(v) v.begin(),v.end()
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs = vector<string>;
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define di deque<int>
#define que queue<int>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int>

#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second

// Input/Output Macros
#define cin(a) int n;cin>>n;vi a(n);for0(i,n){cin>>a[i];}
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define ci cin >>
#define sz(c) c.size()

// Vector Operations
#define sortv(v) sort(aint(v))
#define rev(v) reverse(aint(v))
#define sumv(arr) accumulate(aint(arr), 0LL)
#define Ceil(a, b) ((a + b - 1) / b)
#define ai(o) vi a(n);for0(i,n)ci a[i];

// Type Aliases for Nested Containers
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvi = vector<vector<int>>;
using vvp = vector<vector<pair<int, int>>>;

// Constants
const int maxn = 4e5 + 5;
const int inf = 1e18;
const int mod = 1e9 + 7;

// Utility Functions (Commented for Optional Use)
// int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
// int lcm(int a, int b) { return (a * b) / gcd(a, b); }
// int binpow(int x, int y, int m) { int res(1); x = x % m; while (y > 0) { if (y & 1) res = (res * x) % m; y = y >> 1; x = (x * x) % m; } return res; }
// int qexp(int a, int b, int m) { int res(1); while (b) { if (b % 2) res = res * a % m; a = a * a % m; b /= 2; } return res; }
// bool isPrime(int n) { if (n <= 1) return false; for (int i = 2; i * i <= n; i++) { if (n % i == 0) return false; } return true; }
// static bool cmp(const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; }

// Pushkar Gupta's Solution Starts Here
void push(){
    int n, m;
    cin >> n >> m;
    set<string> p[100][100];
    map<string, pii > pos;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            string s;
            cin >> s;
            p[i][j].insert(s);
            pos[s] = {i, j};
        }
    }
    int k;
    cin >> k;
    string carry = "";
    int r = 0, b = 0;
    for (int i = 0; i < k; i++)
    {
        string s1, s2, s3;
        cin >> s1 >> s2;
        if (s2 == "C")
        {
            cin >> s3;
            carry = s1;
        }
        else if (s2 == "T")
        {
            carry = "";
            auto [x, y] = pos[s1];
            if (p[x][y].contains("RG"))
            {
                cout << i << " BLUE GOAL\n";
                p[x][y].erase(".Q");
                p[(n + 1) / 2][(m + 1) / 2].insert(".Q");
                pos[".Q"] = {(n + 1) / 2, (m + 1) / 2};
                b += 1;
            }
            else if (p[x][y].contains("BG"))
            {
                cout << i << " RED GOAL\n";
                p[x][y].erase(".Q");
                p[(n + 1) / 2][(m + 1) / 2].insert(".Q");
                pos[".Q"] = {(n + 1) / 2, (m + 1) / 2};
                r += 1;
            }
        }
        else
        {
            int dx = 0, dy = 0;
            if (s2 == "U")
                dx = -1;
            if (s2 == "D")
                dx = 1;
            if (s2 == "L")
                dy = -1;
            if (s2 == "R")
                dy = 1;
            auto [x, y] = pos[s1];
            p[x][y].erase(s1);
            if (carry == s1)
                p[x][y].erase(".Q");
            x += dx, y += dy;
            p[x][y].insert(s1);
            pos[s1] = {x, y};
            if (carry == s1)
            {
                p[x][y].erase(".Q");
                pos[".Q"] = {x, y};
            }
            if (s1 == ".B")
            {
                vector<string> cand;
                for (auto &str : p[x][y])
                {
                    if (str[0] == 'B' || str[0] == 'R')
                    {
                        cand.push_back(str);
                    }
                }
                for (auto &str : cand)
                {
                    p[x][y].erase(str);
                    cout << i << ' ' << str << " ELIMINATED\n";
                }
            }
            else if (s1[0] == 'R' || s1[0] == 'B')
            {
                if (p[x][y].contains(".B"))
                {
                    p[x][y].erase(s1);
                    cout << i << ' ' << s1 << " ELIMINATED\n";
                }
            }
        }
    }
    cout << "FINAL SCORE: " << r << ' ' << b << '\n';
}

signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    auto begin = std::chrono::high_resolution_clock::now();

    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
