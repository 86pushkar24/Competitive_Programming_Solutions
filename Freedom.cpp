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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        { 
            cin>>v[i];
        }
        int pos=-1,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
         if(maxi<=v[i])
         {
           maxi=v[i];
           pos=i;
         }
        }
        int sum=0;
        for(int i=0;i<pos;i++)
        {
            sum+=v[i];
        }
        sum+=2*v[pos];
        cout<<sum<<endl;
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

