

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
// #include<adhocproblems.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int temp = -1;
    int count = 0;
    if (n != 1)
    {
        for (int i = 0; i < n; i++)
        {
            //  temp = a[i];
            
            if (a[i] > temp)
            {
                count++;
                temp = a[i];
            }
        }
    }
    else
    {
        count = 0;
    }

    cout << count << endl;

    return 0;
}
