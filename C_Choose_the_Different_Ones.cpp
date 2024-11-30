// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    
    for (auto iter : a) map1[iter]++;
    for (auto iter : b) map2[iter]++;
    
    int a1 = 0, a2 = 0, c = 0;
    
    for (int i = 1; i <= k; i++)
    {
        if (map1.find(i) != map1.end() && map2.find(i) != map2.end())
            c++;
        if (map1.find(i) != map1.end() && map2.find(i) == map2.end())
            a1++;
        if (map2.find(i) != map2.end() && map1.find(i) == map1.end())
            a2++;
    }
    if (a1 + a2 + c == k && a1 <= k / 2 && a2 <= k / 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        clear();
    }
}
