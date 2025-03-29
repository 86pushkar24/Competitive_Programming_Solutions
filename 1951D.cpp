#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,c=0;
        vector<long long>v;
        cin>>n>>k;
        while(k>0&&c<=60){
            if(n-k+1!=0&&n/(n-k+1)==1){
                v.push_back(n-k+1);
                n=k-1;
                k--;
                c++;
                continue;
            }
            long long p=n/(k+1)+1;
            if(p>n)break;
            long long a=n/p;
            c++;
            v.push_back(p);
            n-=a*p;
            k-=a;
        }
        if(c<=60&&k==0){
            cout<<"YES\n"<<c<<"\n";
            for(auto x:v)cout<<x<<" ";
            cout<<"\n";
        }
        else cout<<"NO\n";
    }
}
