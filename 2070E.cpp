#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc=1;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int pre[n+1];
        s=' '+s;
        for(int i=1;i<=n;i++)pre[i]=pre[i-1]+(s[i]=='1');
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int n1=pre[j]-pre[i-1];
                int n0=j-i+1-n1;
                if(n0>n1*2)ans++;
            }
        }
        cout<<ans;
    }
}
