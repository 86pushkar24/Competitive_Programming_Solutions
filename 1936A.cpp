/*                                          जय श्री राधे कृष्णा।                                                         */

#include <bits/stdc++.h>
using namespace std;

char ask(int a,int b,int c,int d){
    cout<<"? "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    char h;
    cin>>h;
    return h;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int mx(0);
        for(int i=1;i<n;i++){
            char h=ask(mx,mx,i,i);
            if(h=='<')mx=i;
        }
        int j(0);
        for(int i(0);i<n;i++){
            char h=ask(mx,j,mx,i);
            if(h=='<')j=i;
            else if(h=='='){
                char g=ask(i,i,j,j);
                if(g=='<')j=i;
            }
        }
        cout<<"! "<<mx<<" "<<j<<endl;
    }
}
