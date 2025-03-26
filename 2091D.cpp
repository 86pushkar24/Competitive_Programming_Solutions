#include "bits/stdc++.h"
using namespace std;

using i64 = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int p=(k+n-1)/n;
        int d=m-p+1;
        cout<<((p+d-1)/d)<<"\n";
    }
}