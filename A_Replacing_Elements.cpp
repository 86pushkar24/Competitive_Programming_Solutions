#include <iostream>
#include <algorithm>
// #include<adhocproblems.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 1; 
        int n,d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= d)        
            {
                flag = 1;
            }
            else
            {
                if (arr[0] + arr[1] <= d)
                {
                    arr[i] = arr[0] + arr[1];
                }
                else
                {
                    flag = 0;
                    break;
                }
                
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
    }
    return 0;
}
