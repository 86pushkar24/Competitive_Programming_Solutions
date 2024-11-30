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

void push(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0, d = 0;
    for(int i =0;i<n;i++)
    {
        if (s[i] == '1')
            c++;
        else
            d++;
    }
    if (c == 0 || d == 0)
        cout << n;
    else
        cout << max(c, d) - min(c, d);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

