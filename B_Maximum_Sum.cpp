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

void push() {
    int n,k;
    cin>>n>>k;
    int a[n];
    map <int ,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        a[i] += a[i-1];
    }
    int i=2*k-1,j=n-1;
    int sum = 0;
    while(i >= -1){
        if(i == -1){
            sum = max(sum,a[j] - 0);
        }
        else {
            sum = max(sum,a[j] - a[i]);
        }
        i -= 2;
        j--;
    }
    cout<<sum<<endl;
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
