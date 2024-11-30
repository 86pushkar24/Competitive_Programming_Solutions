#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int a;
    int b;
    cin >> a >> b;
    if(a%2 != 0 && b/2 == a){
        cout << "NO" << endl;
    }
    else if(b%2 != 0 && a/2 == b){
        cout << "No" << endl;
    }
    else if(a==1 && b == 1){
        cout << "No" << endl;
    }
    else if(a%2 != 0 && b%2 != 0){
        cout << "NO" << endl;
    }
    else
    cout << "Yes" << endl;
    }

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}






























