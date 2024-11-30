#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n;
    cin>>n;
    n*=2;
    int arr[n];
    for (int ind=0; ind<n; ind++)
        cin>>arr[ind];
    sort(arr,arr+n);
    arr[n-1]=0;
    for (int ind=n-2; ind>=0; ind-=2)
        arr[n-1]+=arr[ind];
    cout<<arr[n-1]<<"\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

