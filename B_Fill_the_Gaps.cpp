// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    // int n, flag(0);
    // cin >> n;
    // int arr[n];
    // vector<int> vec(0);
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cin >> arr[i];
    // // }
    // for (int i = 0; i < n; i++)
    // {
    //     vec.push_back(i);
    // }
    // for (int i = 0; i < n-1; i++)
    // {
    //     if((vec[i+1] == (vec[i]+1)) || (vec[i+1] == (vec[i]-1)))
    //     {
    //         flag = 1;
    //     }
    //     else
    //     {
    //         if ((vec[i+1] > (vec[i])))
    //         {
    //             int j = i;
    //             while ((vec[j+1] != (vec[j]+1)))
    //             {
    //                 vec.insert(vec.begin()+j,(vec[j]+1));
    //                 j++;
    //             }
    //         }
    //         if ((vec[i+1] < (vec[i])))
    //         {
    //             int j = i;
    //             while ((vec[j+1] != (vec[j]+1)))
    //             {
    //                 vec.insert(vec.begin()+j,(vec[j]-1));
    //                 j++;
    //             }
    //         }
    //     }
    // }
    // for(auto it : vec){
    //     cout << vec[it] << " ";
    // }
    int n ; 
    cin>>n;
    int arr[n];
    // for(auto it : arr){ cin >> arr[it];}
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] << " ";
        if(arr[i] < arr[i+1]){
        int temp = arr[i]+1;
            while (temp < arr[i+1])
            {
                cout << temp << " ";
                temp++;
            }
        }
        else{
        int temp = arr[i] - 1;
            while (temp > arr[i+1])
            {
                cout << temp << " ";
                temp--;
            }
        }
    }
    cout << arr[n-1] << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

