// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()
#define f(i, a, b) for (int i = a; i < b; i++)
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    string s;
    int p;
    cin >> s >> p;
    vector<bool> vis(s.size());
    int cost = 0;
    for(char c : s)cost += c-'a'+1;
    for(char c = 'z'; c >= 'a'; --c)
    f(i,0,s.size())if(s[i]==c&&cost>p) {
        cost -= (c-'a'+1);
        vis[i]=true;
    }
    f(i,0,s.size())if(!vis[i])cout<<s[i];
    cout<<endl;
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
