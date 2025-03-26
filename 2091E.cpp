#include<bits/stdc++.h>
using namespace std;

const int maxn=1e7+10;
signed main(){
    vector<bool> prm(maxn,true);
    prm[0]=prm[1]=false;
    for(int i=2;i*i<maxn;i++)if(prm[i])for(int j=i*i;j<maxn;j+=i)prm[j]=false;
    vector<int> v;
    for(int i=2;i<maxn;i++)if(prm[i])v.push_back(i);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res(0);
        for(int it:v){
            if(it>n)break;
            res+=n/it;
        }
        cout<<res<<endl;
    }
}