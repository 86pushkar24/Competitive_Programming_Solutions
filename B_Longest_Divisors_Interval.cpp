// #include <stdcpp.h>
#include<iostream>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    int n; cin >> n;
    int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if(n%i != 0){
                break;
            }
            else
            {
                count++;
            }
        }
        cout << count  << endl;
    }
}

