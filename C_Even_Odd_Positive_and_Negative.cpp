

// #include<bits/stdc++.h>
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
        int countEven = 0;
        int countOdd = 0;
        int countPostive = 0;
        int countNegative = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]>0)
            {
                countPostive++;
            }
            else if(arr[i] < 0)
            {
             countNegative++;   
            }   
        }
        cout << "Even: " << countEven << endl;
        cout << "Odd: " << countOdd << endl;
        cout << "Positive: " << countPostive << endl;
        cout <<  "Negative: "<< countNegative << endl;
    
    return 0;
}

