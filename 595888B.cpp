#include<bits/stdc++.h>
using namespace std;
const int maxn=110000;
const int q=1e5;
int main(){
    vector<bool> chk(maxn+1,true);
    chk[0]=chk[1]=false;
    for(int i=2;i*i<=maxn;i++)if(chk[i])for(int j=i*i;j<=maxn;j+=i)chk[j]=false;
    vector<int> v;
    for(int i=2;i<=maxn;i++)if(chk[i])v.push_back(i);
    vector<int> res(q+1);
    int i(0);
    for(int j=1;j<=q;j++){
        while(i<v.size()&&v[i]<j)i++;
        res[j]=v[i];
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<res[n]<<endl;
    }
}