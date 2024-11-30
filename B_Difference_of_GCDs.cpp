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
        int n,l,r; cin >> n >> l >> r;
        vector<int>answer(n+1);
 
        bool found = false;
 
        for(int i = n; i>=1;i--)
        {
            int x = r/i * i;
 
            if(x>=l)answer[i] = x;
            else found = true;
        }
 
        if(found)cout << "NO" << endl;
        else 
        {
            cout << "YES" << endl;
            for(int i = 1; i <= n; i++) cout << answer[i] << " ";
            cout << endl;
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
