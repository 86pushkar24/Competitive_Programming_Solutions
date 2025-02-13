#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>d(3,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        d[a[i]%3]++;
    }
    if(d[0]<=n/2){
        cout<<"0"<<endl;
        int z=n/2-d[0];
        for(int i=0;i<n;i++){
            if(a[i]%3==0||z>0){
                cout<<"0";
                if(a[i]%3!=0)z--;
            }else{
                cout<<"1";
            }
        }
    }else{
        cout<<"2"<<endl;
        int z=d[0]-n/2;
        for(int i=0;i<n;i++){
            if(a[i]%3!=0||z>0){
                cout<<"0";
                if(a[i]%3==0)z--;
            }else{
                cout<<"1";
            }
        }
    }
    return 0;
}
