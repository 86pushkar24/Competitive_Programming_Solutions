// @prefix cpp
// @description

#include <stdcpp.h>
// #include<bits/stdc++.h>

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
    int answer = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        int number = i + 1;
        for (int j = i; j < n; j += number)
        {
            if (s[j] != '1')
            {
                if (s[j] == '0')
                    answer += number;
                s[j] = '2';
            }
            else
                // break;
        }
    }
    cout << answer << endl;
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
