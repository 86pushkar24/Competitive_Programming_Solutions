#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<0<<endl;
        int a;
        cin>>a;
        cout<<1<<endl;
        int b;
        cin>>b;
        cout<<"!"<<endl;
        int m;
        cin>>m;
        if(a==0)cout<<2*m<<endl;
        else if(a==1)cout<<m+(m|1)<<endl;
        else{
            if(b==(a|1)+1)cout<<(m|a)+m<<endl;
            else cout<<(m|1)+(m|(a-1))<<endl;
        }
    }
    return 0;
}
