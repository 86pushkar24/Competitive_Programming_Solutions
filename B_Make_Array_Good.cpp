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

void push()
{
    int n,x,b;
    cin>>n;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        b=log2(x);
        b=pow(2,b+1)-x;
        cout<<i+1<<" "<<b<<endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        push();
    }
}
