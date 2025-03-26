#include<bits/stdc++.h>
using namespace std;
#define int long long
int fn(int a,int m){
    int m0=m,x0=0,x1=1;
    while(a>1){
        int q=a/m;
        int t=m;
        m=a%m;
        a=t;
        t=x0;
        x0=x1-q*x0;
        x1=t;
    }
    if(x1<0)x1+=m0;
    return x1;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=1)cout<<-1<<endl;
        else{
            vector<int> p(n);
            int inv=fn(2,n);
            for(int i=0;i<n;i++)p[i]=((i*inv)%n)+1;
            for(int i=0;i<n;i++){
                cout<<p[i];
                if(i<n-1)cout<<' ';
                else cout<<endl;
            }
        }
    }
}