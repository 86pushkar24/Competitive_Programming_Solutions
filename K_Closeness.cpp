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
    int n, k;
    cin >> n >> k;
    multiset<int> nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.insert(x);
    }
    int mindf = INT_MAX;
    while(true){
        int start = (*nums.begin());
        int end = (*nums.rbegin());
        mindf = min(mindf, end - start);
        int diff = end - start;
        if(k > diff){
            break;
        }
        int quo = diff/k;
        start += quo*k;
        nums.erase(nums.begin());
        nums.insert(start);
    }
    for(int i = 0; i < n; i++){
        int start = (*nums.begin());
        int end = (*nums.rbegin());
        mindf = min(mindf, end - start);
        start += k;
        nums.erase(nums.begin());
        nums.insert(start);
    }
    cout << mindf << endl;
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
    return 0;
}
