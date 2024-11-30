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

void push(){
    int n,k;
    // int ans=0;
    // string ans="YES";
    cin>>n>>k;
    vector<int>v(n);
    v[0]=1;
    v[1]=2;
    int j=2,cu=2,temp=n;
    for(int i=2;i<n;i++){
        if((n-i-1)<=(k-(j+cu))){
          
            v[i]=j+cu;
            j=j+cu;
            cu++;
        }
        else{
            temp=i;
            break;
        }
    }
    for(int i=temp;i<n;i++){
        v[i]=v[i-1]+1;
    
    }
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
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

