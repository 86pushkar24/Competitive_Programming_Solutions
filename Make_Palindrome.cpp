// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    for (auto it : s)
    {
        m[it]++;
    }
    int o = 0;
    for(auto it : m){
        if (it.second & 1)
        {
            o++;
        }
    }
    int maxi = max(0,o-1);
    cout << maxi << endl;
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
