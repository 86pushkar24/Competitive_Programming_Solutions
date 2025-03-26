#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, x, d;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i(0);i<n;i++)cin>>v[i];
        sort(v.rbegin(),v.rend());
        int ans(0),k(0);
        for(int i(0);i<n;i++){
            k++;
            if (v[i]*k>=x){
            ans++;
            k=0;
            }
        }
        cout<<ans<<endl;
    }
}