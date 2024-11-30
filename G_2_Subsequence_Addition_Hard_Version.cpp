// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr , arr + n);
    long long sum = 1;
    int can = 1;
    if(arr[0] != 1) can = 0;
    for(int i = 1;i<n;i++) {
        if(arr[i] > sum) 
        {
            can = 0;
            break;
        }
        sum += arr[i];
    }
    if(can == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

