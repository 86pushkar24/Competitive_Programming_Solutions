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
    string s;cin >> s;
    bool ok = 1,ok2 = 1;
    for (int a = 0;a < s.length();a++)
    s[a] >= 'A' && s[a] <= 'Z' ? ok = ok : ok = 0;
    s[0] >= 'a' && s[0] <= 'z' ? ok2 = ok2 : ok2 = 0;
    for (int a = 1;a < s.length();a++)
    s[a] >= 'A' && s[a] <= 'Z' ? ok2 = ok2 : ok2 = 0;
    if (ok || ok2)
    for (int a = 0;a < s.length();a++)
        if (!a)
            cout << (s[a] >= 'A' && s[a] <= 'Z' ? (char) (s[a] + 32) : (char) (s[a] - 32));
        else
            cout << (s[a] >= 'A' && s[a] <= 'Z' ? (char) (s[a] + 32) : (char) (s[a] - 32));
    else
    cout << s;
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

