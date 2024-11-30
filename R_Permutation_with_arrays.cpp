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
    int n; cin >> n;
    vector<int> A(n) , B(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> B[i];
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

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

