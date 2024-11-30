


#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
// #include<adhocproblems.h>
using namespace std;
#define int long long


signed main()
{
    int n;
    cin >> n;
    int ans = __builtin_popcount(n);
    cout << ans;
    return 0;
}
