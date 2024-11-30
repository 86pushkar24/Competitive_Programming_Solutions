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
    int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int check = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i+1] < arr[i]){
                check = 1;
                break;
            }
        }
        if(check == 1 && k<=1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
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

