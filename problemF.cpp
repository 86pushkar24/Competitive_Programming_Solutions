#include "bits/stdc++.h"
using namespace std;

#define int long long
#define nl '\n'
#define for0(i, n) for (int i = 0; i < n; ++i)
#define for1(i, n) for (int i = 1; i <= n; ++i)
#define fore(i, a, b) for (int i = a, gon = b; i < gon; ++i)
#define lbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin()
#define ubound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define aint(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector< pair<int, int> >
#define vb vector<bool>
#define di deque<int>
#define si set<int>
#define mii map<int, int>
#define mts multiset<int> 
#define pb push_back
#define bg begin()
#define nd end()
#define fi first
#define se second
#define cin(a) int n; cin>>n; int a[n]; for (int i = 0; i < n; i++) {cin>>a[i];}
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define co(a) {cout<<a<<' ';}
#define cou(a) {cout<<a<<"\n";}
#define cy(x) {if(x) yes else no}

const int maxn=4e5+5;
const int inf=1e18;
const int mod=1e9+7;

// int gcd (int a, int b) { return a ? gcd (b % a, a) : b; }
// int lcm (int a, int b) { return (a*b) / gcd(a, b);}
// int binpow(int x, int y, int m){int res(1);x = x % m;while (y > 0){if (y & 1) res = (res * x) % m;y = y >> 1;x = (x * x) % m;}return res;}
// int qexp(int a, int b, int m) { int res(1); while(b){ if(b%2) res = res * a % m;a = a * a % m;b /= 2;}res;}
// bool isPrime(int n) {if(n <= 1) return 0; for (int i = 2; i * i <= n; i++) {if(n % i == 0) return 0;} return 1;}
// static bool cmp(const vector<int>& a, const vector<int>& b) {return a[1] < b[1];}

// Pushkar Gupta's Solution Start's Here
void push(){
    int a, b, v1, v2;
    cin >> a >> b >> v1 >> v2;
    int n;
    cin >> n;
    // Store pegs as vector of pairs
    vpii pegs(n);
    for (int i = 0; i < n; i++)
        cin >> pegs[i].first >> pegs[i].second;
    double min_t = INF;
    int min_x = INT32_MAX;
    int min_idx = -1;
    for (int i = 0; i < n; i++)
    {
        int x = pegs[i].first;
        int y = pegs[i].second;
        // Compute A, B, C
        double A = (double)v1 * v2;
        double B = (double)a * v2 - (double)v1 * b + (double)v1 * y - (double)x * v2;
        double C = (double)(-a) * b + (double)a * y + (double)x * b;
        double t_candidate = INF;
        if (abs(A) < EPS)
        {
            if (abs(B) < EPS)
            {
                if (abs(C) < EPS)
                {
                    // All t satisfy, t=0 is the first
                    t_candidate = 0.0;
                }
                // Else no solution
            }
            else
            {
                double t = -C / B;
                if (t >= -EPS)
                {
                    // To account for floating precision, treat t >= -EPS as t >=0
                    t_candidate = max(t, 0.0);
                }
            }
        }
        else
        {
            double D = B * B - 4.0 * A * C;
            if (D < -EPS)
            {
                // No solution
            }
            else
            {
                if (D < 0.0)
                    D = 0.0;
                double sqrtD = sqrt(D);
                double t1 = (-B - sqrtD) / (2.0 * A);
                double t2 = (-B + sqrtD) / (2.0 * A);
                // A >0
                // t1 <= t2
                if (t1 >= -EPS)
                {
                    t_candidate = max(t1, 0.0);
                }
                else if (t2 >= -EPS)
                {
                    t_candidate = max(t2, 0.0);
                }
            }
        }
        // Now, check if t_candidate is valid
        if (t_candidate < min_t - EPS)
        {
            min_t = t_candidate;
            min_x = x;
            min_idx = i + 1;
        }
        else if (abs(t_candidate - min_t) < EPS && x < min_x)
        {
            min_x = x;
            min_idx = i + 1;
        }
    }
    // Now, verify which pegs have t >=0 and t < INF
    // If min_t is still INF, no peg was touched
    // Also, ensure that min_t is actually achievable
    // It could be that no pegs have valid t
    bool found = false;
    double final_min_t = INF;
    int final_min_x = INT32_MAX;
    int final_idx = -1;
    for (int i = 0; i < n; i++)
    {
        int x = pegs[i].first;
        int y = pegs[i].second;
        // Compute A, B, C
        double A = (double)v1 * v2;
        double B = (double)a * v2 - (double)v1 * b + (double)v1 * y - (double)x * v2;
        double C = (double)(-a) * b + (double)a * y + (double)x * b;
        double t_candidate = INF;
        if (abs(A) < EPS)
        {
            if (abs(B) < EPS)
            {
                if (abs(C) < EPS)
                {
                    // All t satisfy, t=0 is the first
                    t_candidate = 0.0;
                }
                // Else no solution
            }
            else
            {
                double t = -C / B;
                if (t >= -EPS)
                {
                    t_candidate = max(t, 0.0);
                }
            }
        }
        else
        {
            double D = B * B - 4.0 * A * C;
            if (D < -EPS)
            {
                // No solution
            }
            else
            {
                if (D < 0.0)
                    D = 0.0;
                double sqrtD = sqrt(D);
                double t1 = (-B - sqrtD) / (2.0 * A);
                double t2 = (-B + sqrtD) / (2.0 * A);
                // A >0
                // t1 <= t2
                if (t1 >= -EPS)
                {
                    t_candidate = max(t1, 0.0);
                }
                else if (t2 >= -EPS)
                {
                    t_candidate = max(t2, 0.0);
                }
            }
        }
        if (t_candidate < final_min_t - EPS)
        {
            final_min_t = t_candidate;
            final_min_x = x;
            final_idx = i + 1;
            found = true;
        }
        else if (abs(t_candidate - final_min_t) < EPS && t_candidate < INF)
        {
            if (x < final_min_x)
            {
                final_min_x = x;
                final_idx = i + 1;
            }
            found = true;
        }
    }
    // Now, check if any peg was found
    bool any = false;
    double smallest_t = INF;
    int chosen_idx = -1;
    int chosen_x = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        int x = pegs[i].first;
        int y = pegs[i].second;
        // Compute A, B, C
        double A = (double)v1 * v2;
        double B = (double)a * v2 - (double)v1 * b + (double)v1 * y - (double)x * v2;
        double C = (double)(-a) * b + (double)a * y + (double)x * b;
        double t_candidate = INF;
        if (abs(A) < EPS)
        {
            if (abs(B) < EPS)
            {
                if (abs(C) < EPS)
                {
                    // All t satisfy, t=0 is the first
                    t_candidate = 0.0;
                }
                // Else no solution
            }
            else
            {
                double t = -C / B;
                if (t >= -EPS)
                {
                    t_candidate = max(t, 0.0);
                }
            }
        }
        else
        {
            double D = B * B - 4.0 * A * C;
            if (D < -EPS)
            {
                // No solution
            }
            else
            {
                if (D < 0.0)
                    D = 0.0;
                double sqrtD = sqrt(D);
                double t1 = (-B - sqrtD) / (2.0 * A);
                double t2 = (-B + sqrtD) / (2.0 * A);
                // A >0
                // t1 <= t2
                if (t1 >= -EPS)
                {
                    t_candidate = max(t1, 0.0);
                }
                else if (t2 >= -EPS)
                {
                    t_candidate = max(t2, 0.0);
                }
            }
        }
        if (t_candidate < smallest_t - EPS)
        {
            smallest_t = t_candidate;
            chosen_x = x;
            chosen_idx = i + 1;
            any = true;
        }
        else if (abs(t_candidate - smallest_t) < EPS && t_candidate < INF)
        {
            if (x < chosen_x)
            {
                chosen_x = x;
                chosen_idx = i + 1;
            }
            any = true;
        }
    }
    // Now, output the result
    if (any)
    {
        cout << chosen_idx << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    auto begin = std::chrono::high_resolution_clock::now();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}

