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

void push()
{
   int n,k,x,y,z;
    cin >> n >> k;
    map <int,pair <int,int>> mp;
    for (int a = 0;a < n;a++)
        cin >> x,mp[x].first == 0 ? mp[x].first = a + 1 : mp[x].second = a + 1;
    while (k--) {
        cin >> y >> z;
        if (mp.count(y) && mp.count(z))
            cout << (mp[y].first < mp[z].second || mp[y].first < mp[z].first ? "YES" : "NO") << "\n";
        else
            cout << "NO\n";
    }
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
