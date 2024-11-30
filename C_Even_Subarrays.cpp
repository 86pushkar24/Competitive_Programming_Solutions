// @prefix cpp
// @description

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
const int maxn = 4e5 + 69;
vector <int> bad;
int m[maxn]; 
void push()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int p[n + 1];
    p[0] = 0;
    for (int i = 1; i <= n; i++)
        p[i] = p[i - 1]^a[i];
    int ans(0);
    for (int i = 0; i <= 2 * n; i++) m[i] = 0;
    m[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (auto x : bad)
        {
            int need = p[i] ^ x;
            if (need <= 2 * n)
                val -= m[need];
        }
        ans += val;
        m[p[i]]++;
    }  
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int i=0; i*i<maxn; i++){
        bad.push_back(i*i);
    }
    while (tc--)
    {
        push();
    }
}
// 
