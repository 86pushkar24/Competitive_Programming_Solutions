// @prefix cpp
// @description

// #include <stdcpp.h>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push()
{
    int n;
    cin >> n;
    map<string, int> answer;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (answer[s] == 0)
        {
            cout << "OK\n";
            answer[s]++;
        }
        else
        {
            answer[s + to_string(answer[s])]++;
            cout << s + to_string(answer[s]++) << endl;
        }
    }
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
