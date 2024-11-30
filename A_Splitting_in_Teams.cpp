

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
    int one = 0, two = 0, ans = 0 , a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            one++;
        else
            two++;
    }
    if (one >= two)
    {
        ans = two + ((one-two)/3);
    }
    else if (two > one)
    {   
        ans = one;     
    }
    cout << ans << endl;

    return 0;
}
