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

int isVowel(char ch) {
    ch = char(tolower(ch));
    if (ch == 'a' or ch == 'o' or ch == 'y' or ch == 'e' or ch == 'i' or ch == 'u')return true;
    else return false;
}
void push()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (!(isVowel(s[i])))
        {
            cout << '.' << char(tolower(s[i]));
        }
    }
    cout << endl;
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
