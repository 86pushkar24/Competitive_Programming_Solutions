// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // sort(arr,arr+n);
    // cout << arr[0] << " " << arr[n-1] << endl;
    int a,b,c; cin>>a>>b>>c;
    int max = INT_MIN;
    int min = INT16_MAX;
    if (a >= b && a >=c) max = a;
    if(b >= a && b >=c) max = b;
    if(c >= b && c >=a) max = c;
    if (a <= b && a <= c) min =a;
    if (b <= a && b <= c) min =b;
    if(c <= b && c <= a) min =c;
    cout << min << " " << max << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

