// @prefix cpp
// @description 

// #include <stdcpp.h
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
    int n, steps = 0;
    cin >> n;
    vector<int> res(n);
    for (auto &i : res)
        cin >> i;
    sort(res.begin(), res.end());
    for (int i = 0; i < n; i++)
    {
        if (res[i] >= res[0] * 2)
            steps += (res[i] + 2 * res[0] - 2) / (2 * res[0]-1) - 1;
    }
    cout << steps << endl;
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

