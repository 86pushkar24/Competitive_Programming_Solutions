#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<0<<endl;
        int a;
        cin>>a;
        int nw(0);
        for(int i(0);i<30;i+=2)nw+=(1<<i);
        cout<<nw<<endl;
        int b;
        cin>>b;
        b-=2*nw;
        int c=a-b;
        cout<<"! "<<endl;
        int k;
        cin>>k;
        int res(0);
        for(int i(0);i<30;i++){
            if(k&(1<<i))res+=2*(1<<i);
            else{
                if(i%2==0)res+=(c&(1<<i))+(c&(1<<(i+1)));
                else res+=(b&(1<<i))+(b&(1<<(i+1)));
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
