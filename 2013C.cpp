#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

int ask(string s)
{
    if (mp.count(s))
        return mp[s];
    cout << "? " << s << endl;
    int x;
    cin >> x;
    return 
        mp[s] = x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        mp.clear();
        int n;
        cin >> n;
        string s;
        if (ask("0"))
            s = "0";
        else
            s = "1";
        while (s.size() < n)
        {
            s += "0";
            if (ask(s))
                continue;
            s.pop_back();
            s += "1";
            if (ask(s))
                continue;
            s.pop_back();
            break;
        }

        while (s.size() < n)
        {
            string t = s;
            s = "0" + s;
            if (ask(s))
                continue;
            s = "1" + t;
        }
        cout << "! " << s << endl;
    }
}
