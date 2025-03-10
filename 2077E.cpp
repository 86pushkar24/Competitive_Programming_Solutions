#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<0<<endl;
        int a;
        cin>>a;
        int cur=0;
        for(int i=0;i<30;i+=2)cur+=(1<<i);
        cout<<cur<<endl;
        int b1;
        cin>>b1;
        b1-=2*cur;
        int b2=a-b1;
        cout<<"! "<<endl;
        int m;
        cin>>m;
        int ans=0;
        for(int i=0;i<30;i++){
            if(m&(1<<i))ans+=2*(1<<i);
            else{
                if(i%2==0)ans+=(b2&(1<<i))+(b2&(1<<(i+1)));
                else ans+=(b1&(1<<i))+(b1&(1<<(i+1)));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
