#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int xr=0;
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            xr^=a[i];
        }
        if(n%2!=0){
            cout<<xr<<endl;
        }
        else{
            if(xr==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}