#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1]={0},b[n+1]={0},c[n+1]={0};
        for(int i=1;i<=n;i++)cin>>a[i];
        string s;
        cin>>s;
        for(int i=1;i<=n;i++){
            if(c[i])continue;
            int k(0);
            while(!c[i]){
                c[i]=1;
                k+=s[i-1]=='0';
                i=a[i];
            }
            while(c[i]!=2){
                b[i]=k;
                c[i]=2;
                i=a[i];
            }
        }
        for(int i=1;i<=n;i++)cout<<b[i]<<" ";
        cout<<endl;
    }
}
