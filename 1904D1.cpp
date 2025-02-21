#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int &x:a)
            cin>>x;
        for(int &x:b)
            cin>>x;
        bool ok=false;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                bool found=false;
                for(int j=i+1;j<n;j++){
                    if(a[j]>b[i]||b[j]<b[i])
                        break;
                    if(b[j]==b[i]){
                        found=true;
                        break;
                    }
                }
                for(int j=i-1;j>=0;j--){
                    if(a[j]>b[i]||b[j]<b[i])
                        break;
                    if(b[j]==b[i]){
                        found=true;
                        break;
                    }
                }
                if(!found){
                    ok=true;
                    break;
                }
            }
        }
        if(ok)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
