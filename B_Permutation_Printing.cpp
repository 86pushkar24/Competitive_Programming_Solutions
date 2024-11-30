#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clear(){
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int res = 1;
    for(int i = 0; i < n; i += 2) arr[i] = res++;
    for(int i = 1; i < n; i += 2) arr[i] = res++;
    for(auto i : arr) cout << i << " ";
    cout << endl;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc; while (tc--){
    clear();
    }
}

