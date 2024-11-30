// #include <bits/stdc++.h>
#include<stdcpp.h>
using namespace std;
int main()
{
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        char c = 'a';
        map<char, int> maps;
        for(char c = 'a'; c <= 'z'; c++)
        {
            maps[c] = 0;
        }
        string res = "";
        for(int i = 0; i < n; i++)
        {
            for(int c = 'a'; c <= 'z'; c++)
            {
                if(a[i] == 0 && maps[c] == 0)
                {
                    maps[c] = 1;
                    res += c;
                    break;
                }
                if (a[i] == maps[c])
                {
                    maps[c] +=1;
                    res +=c;
                    break;
                }
            }
        }
        cout << res << endl;
    }
}
