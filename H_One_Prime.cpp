#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
// #include<adhocproblems.h>
using namespace std;
#define int long long


signed main()
{
    int x;
    cin >> x;
    int flag = 0;
    for (int i = 2; i < x; i++)
    {
        /* code */
        if (x % i == 0)
        {
           flag++;
        }
        }
    if (flag != 0)      
    {
        /* code */
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
