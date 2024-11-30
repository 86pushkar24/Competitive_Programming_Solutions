#include <iostream>
#include <string>

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
    string s;
    cin >> s;
    s = " " + s;
    bool ok = true;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += s[i] - '0';
    }
    if (cnt == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '1')
            {
                cnt--;
            }
        }
    }
    cout << (cnt % 2 == 0 ? "YES" : "NO") << "\n";
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

    return 0;
}
