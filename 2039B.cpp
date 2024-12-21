#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool f = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << s[i] << s[i] << '\n';
                f = true;
                break;
            }
        }
        if (f)
            continue;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] != s[i + 2])
            {
                cout << s[i] << s[i + 1] << s[i + 2] << '\n';
                f = true;
                break;
            }
        }
        if (f)
            continue;
        cout << "-1\n";
    }
}