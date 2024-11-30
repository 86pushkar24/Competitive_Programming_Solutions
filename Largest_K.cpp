#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
        int a, b;
        cin >> a >> b;

        int z;
        if (a > 1) {
            z = min(b / (a - 1), b);
        } else {
            z = b;
        }
        cout << z << endl;
    }

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

