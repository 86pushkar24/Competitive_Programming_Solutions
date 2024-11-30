// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int a,b,c;
    cin >> a >> b >> c;
    int arr[3] = {a,b,c};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    for (int i = 0; i <=2; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << a <<endl << b << endl << c <<endl;
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc; cin >> tc; while (tc--){
    clear();
    // }
}

