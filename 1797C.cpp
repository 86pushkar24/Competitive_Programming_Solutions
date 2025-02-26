#include<bits/stdc++.h>
using namespace std;
int query(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
    cout<<flush;
    int d;
    cin>>d;
    return d;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        if(n==1||m==1){
            if(n==1){
            int c=query(1,1);
            cout<<"! "<<1<<" "<<c+1<<endl;
            cout<<flush;
            }
            else{
            int r=query(1,1);
            cout<<"! "<<r+1<<" "<<1<<endl;
            cout<<flush;
            }
            continue;
        }
        vector<int> v(3);
        v[0]=query(1,1);
        v[1]=query(1,2);
        int r(0),c(0);
        if(v[0] == 0){
        cout<<"! "<<1<<" "<<1<<endl;
        cout<<flush;
        continue;
        }
        if(v[1]<v[0]){
            c=v[0]+1;
            v[2]=query(1,c);
            r=v[2]+1;
        }
        else{
            r=v[0]+1;
            v[2]=query(r,1);
            c=v[2]+1;
        }
        cout<<"! "<<r<<" "<<c<<endl;
        cout<<flush;
    }
    return 0;
}
