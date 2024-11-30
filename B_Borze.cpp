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
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '.') cout << "0";
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        else
        {
            cout << "2";
            i++;
        }
    }
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

