#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k>n||k>x+1){
            cout<<"-1\n";
            continue;
        }
        if(k==x)x--;
        int ans=0;
        for(int i=0;i<n;i++){
            if(i<k)ans+=i;
            else ans+=x;
        }
        cout<<ans<<endl;
    }
}