#include <bits/stdc++.h>
using namespace std;
string fn(const string &s)
{
    string res = s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            string temp = s;
            for (int k = i; k <= j; k++)
            {
                temp[k] = (temp[k] == '0' ? '1' : '0');
            }
            res = min(res, temp);
        }
    }
    return res;
}

string solve(const string &S)
{
    string ans = "";
    for (int i = 0; i <= S.size(); i++)
    {
        for (int j = i; j <= S.size(); j++)
        {
            string T = S.substr(0, i) + S.substr(j);
            string F = fn(T);
            ans = max(ans, F);
        }
    }
    return ans;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        cout << solve(S) << "\n";
    }
    return 0;
}
