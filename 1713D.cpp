#include<bits/stdc++.h>
using namespace std;
int query(int a,int b){
    cout<<"? "<<a<<" "<<b<<endl;
    int x;
    cin>>x;
    return x;
}
void out(int x){
    cout<<"! "<<x<<endl;
}
signed main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=1;i<=pow(2,n);i++)v.push_back(i);
        while(v.size()>=4){
            vector<int> v2;
            for(int i=0;i<v.size();i+=4){
                int a=v[i],b=v[i+1],c=v[i+2],d=v[i+3];
                int a1=query(a,c);
                int ans;
                if(a1==0){
                    int b1=query(b,d);
                    if(b1==1)ans=b;
                    else ans=d;
                }
                else if(a1==1){
                    int b1=query(a,d);
                    if(b1==1)ans=a;
                    else ans=d;
                }
                else{
                    int b1=query(b,c);
                    if(b1==1)ans=b;
                    else ans=c;
                }
                v2.push_back(ans);
            }
            v=v2;
        }
        int a=v[0],b=v[1],b1=query(a,b);
        if(b1==1)out(a);
        else out(b);
    }
}