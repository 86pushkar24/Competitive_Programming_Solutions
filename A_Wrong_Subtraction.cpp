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
    int n,k;
    cin>>n>>k;
    while(k != 0) {
        if(n%10 != 0) {
            n--;
            k--;
        }
        else if(n%10 == 0) {
            n/=10;
            k--;
        }
    }
    cout<<n<<endl;
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

