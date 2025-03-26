#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int v[n];
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v,v+n);
        int res=0;
        int end=1;
        for(int i=n-1;i>=0;i--){
            if(1ll*end*v[i]>=x){
                res++;
                end=1;
            }
            else end++;
        }
        cout<<res<<endl;
    }
}