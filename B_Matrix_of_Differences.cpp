// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
// #define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n;
    cin >> n;
    int arr[n][n] {};
    for (int a = 0,x = 1,y = n * n;a < n;a++)
        if (a % 2)
            for (int b = n - 1;b >= 0;b--)
                arr[a][b] = ((a + b) % 2 ? y : x),(a + b) % 2 ? y-- : x++;
        else
            for (int b = 0;b < n;b++)
                arr[a][b] = ((a + b) % 2 ? y : x),(a + b) % 2 ? y-- : x++;
    for (int a = 0;a < n;a++)
        for (int b = 0;b < n;b++)
            cout << arr[a][b] << " \n"[b == n - 1];
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

