// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(v) v.begin(), v.end()
#define pb push_back
#define int long long int
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int x, int y) {
    if (y == 0) return x;
    return gcd(y, x%y);
}

int lcm(int x, int y) {
    return (x / gcd(x,y)) * y;
}

void push(){
    int n; cin >> n;
    vector<int> a1(n);
    int val(1), sm(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
        val = lcm(a1[i],val);
    }
    vector<int> a2(n);
    for (int i = 0; i < n; i++)
    {
        a2[i] = val / a1[i];
        sm += a2[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (sm >= a2[i] * a1[i])
        {
            cout << "-1" << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        for (int it : a2)
            cout << it << " ";
        cout << endl;
    }
}

signed main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds." << endl;
}
