#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
#define int long long

signed main()
{
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < s.size(); i++)
    {  
    if (s[i] >= 'A' && s[i] <= 'Z' )
    {
     upper++;   
    } 
    else
    {
        lower++;
    }
    }
    if (upper > lower)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }

    else{
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    
    return 0;
}
