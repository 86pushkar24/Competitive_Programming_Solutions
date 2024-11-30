


#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
// #include<adhocproblems.h>
using namespace std;
#define int long long


signed main()
{
    int w;
    cin >> w;
    if (w%2 == 0)
    {
        if (w == 2)
        {
        cout << "NO";
        }
        else{
            cout << "YES";
        }
    }  
    else
    {
        cout << "NO";
    }
    
    
    return 0;
}
