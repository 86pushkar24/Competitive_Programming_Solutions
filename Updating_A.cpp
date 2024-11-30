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
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    multiset<int> sum;
    int rsum = 0;
    for (int i = 0; i < n; i++) {
        rsum += arr[i];
        sum.insert(rsum);
    }
    int mini = LLONG_MAX;
    rsum = 0;
    for (int i = 0; i < n - 1; i++) {
        rsum += arr[i];
        auto it = sum.find(rsum);
        sum.erase(it);
        int nsum = *(sum.begin());
        if (i != 0) {
            nsum -= rsum;
            nsum += arr[i];
        }
        mini = min(mini,nsum);
    }
    rsum += arr[n - 1];
    cout << rsum - mini + abs(mini) << endl;
    
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

