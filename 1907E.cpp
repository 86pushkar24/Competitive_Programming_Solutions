#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]{};
    for(int a=0;a<=9;a++)for(int b=0;a+b<=9;b++)for(int c=0;a+b+c<=9;c++)arr[a+b+c]+=1;
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        long long ans=1;
        for(auto ch : to_string(n)){
            int x=ch-'0';
            ans*=arr[x];
        }
        cout<<ans<<'\n';
    }
}