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
    int N;
        cin >> N;
        vector<int> scr(N);
        for (int i = 0; i < N; i++) {
            cin >> scr[i];
        }
        bool good = true;
        for (int i = 0; i < N; i++) {
            if (scr[i] <= 4) {
                good = false;
                break;
            }
        }
        if (good) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
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
