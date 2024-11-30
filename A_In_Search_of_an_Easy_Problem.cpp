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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    if (arr[n-1] == 1)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
        
    return 0;
}
