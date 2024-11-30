

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
// #include<adhocproblems.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int dot = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                dot++;
            }
        }
        int count = 0;
        for (int i = 0; i < n-2; i++)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                count = 1;
            }
        }
        if(count){
            cout<<2<<endl;
        }
        else{
            cout<<dot<<endl;
        }
    }
    return 0;
}
