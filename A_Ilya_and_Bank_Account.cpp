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
    string s;cin>>s;
    int n=stoi(s);
    string s2=s;
    s.erase(s.length()-1,1);
    s2.erase(s2.length()-2,1);
    cout<<max(n,max((int)stoi(s2),(int)stoi(s)));
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        push();
    }
}
