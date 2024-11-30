

// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include<string>
// // #include<adhocproblems.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,x;
//         cin >> n >> x;
//         int arr[n+2];
//                     arr[n+1] = x;

//         for (int i = 1; i <= n; i++)
//         {
//             arr[0] = 0;
//             cin >> arr[i];
//         }
//         arr[n+1] += (arr[n+1] - arr[n]);
//         int temp = -1;
//         for (int i = 0; i <= n; i++)
//         {
//             int ans = arr[i+1] - arr[i];
//             temp = max(abs(ans),temp);
//         }
        
//         cout << temp << endl;
//     }
//     return 0;
// }


// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include<string>
// // #include<adhocproblems.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,x;
//         cin >> n >> x;
//         int arr[n+1];
//         int maxi= INT_MIN;
//         arr[0]=0;
//         for (int i = 1; i <= n; i++)
//         {
//             cin>>arr[i];
//             maxi=max(maxi,(arr[i]-arr[i-1]));

//         }
//         maxi=max(maxi,((x*2)-(arr[n]*2)));
//         cout<<maxi<<endl;

    
//     }
//     return 0;
// }

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n ,x;
    cin >> n >> x;
    int maxi = INT_MIN;
    int arr[n+2];
    for(int i = 1; i <= n; i++)
    {
        arr[0] = 0;
        cin >> arr[i];
    }
    arr[n+1] = x;
    sort(arr,arr+(n+1));
    int res1 = (arr[n+1] - arr[n])*2;
    // cout << res1 << endl;
    for (int i = 0; i <= n; i++)
        {
        for (int j = 1; j <= n+1; j++)
        {
            int res2 = arr[j] - arr[i];
            cout << res2 << endl;
            maxi = max(maxi,res2);

        }
        cout << endl;
    }
    cout << max(maxi,res1) << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

