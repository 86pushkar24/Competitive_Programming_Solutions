#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=24;i++){
        cout<<"? "<<i<<' '<<i+1<<endl;
        long long x;
        cin>>x;
        if(x<0){
            cout<<"! "<<i<<endl;
            return 0;
        }
        cout<<"? "<<i+1<<' '<<i<<endl;
        long long y;
        cin>>y;
        if(x!=y){
            cout<<"! "<<x+y<<endl;
            return 0;
        }
    }
    return 0;
}
