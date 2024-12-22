/*जय श्री राधे कृष्णा।*/
//Pushkar Gupta's Solution Starts Here

#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    while(t--){
        int n,a,b,c;cin>>n>>a>>b>>c;
        int sm=a+b+c;
        int div=n/sm,r=n%sm;
        if(r==0)cout<<div*3<<endl;
        else{
        int res=div*3;if(r<=a)res+=1;
        else if(r<=a+b)res+=2;
        else res+=3;cout<<res<<endl;
        }
    }
    return 0;
}
