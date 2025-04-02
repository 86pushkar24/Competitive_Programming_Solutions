#include<bits/stdc++.h>
using namespace std;
// #define int long long
signed main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<long long> seg1(2*n), seg2(2*n);
    long long res=0;
    for(int i=n-1;i>=0;i--)res+=(n-i)*v[i];
    for(int i=0;i<n;i++)seg1[i+n]=res, res-=(n-i)*v[i];
    for(int i=0;i<n;i++)res+=v[i], seg2[i+n]=res;
    for(int i=n-1;i>0;i--){
        seg1[i]=seg1[2*i]+seg1[2*i+1];
        seg2[i]=seg2[2*i]+seg2[2*i+1];
    }
    auto find1=[&](int l,int r)->int {
        long long res=0;
        for(l+=n,r+=n;l<r;l>>=1,r>>=1){
            if(l&1)res+=seg1[l++];
            if(r&1) res+=seg1[--r];
        }
        return res;
    };
    auto find2=[&](int l,int r)->int {
        long long res=0;
        for(l+=n,r+=n;l<r;l>>=1,r>>=1){
            if(l&1)res+=seg2[l++];
            if(r&1)res+=seg2[--r];
        }
        return res;
    };
    auto query=[&](int x,int l,int r)->int {
        long long ans=0;
        ans+=find2(x+l,x+r);
        if(x>0)ans-=(r-l)*seg2[x-1+n];
        return ans;
    };
    int q;
    cin>>q;
    vector<long long> id(n);
    res=0;
    for(int i=0;i<n;i++)id[i]=res, res+=n-i;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--, r--;
        int x1=lower_bound(id.begin(),id.end(),l)-id.begin();
        int x2=upper_bound(id.begin(),id.end(),r)-id.begin()-1;
        if(x1>x2)cout<<query(x2,l-id[x2],r-id[x2]+1)<<'\n';
        else{
            long long ans=0;
            if(x1<x2)ans+=find1(x1,x2);
            if(l<id[x1])ans+=query(x1-1,l-id[x1-1],n-x1+1);
            ans+=query(x2,0,r-id[x2]+1);
            cout<<ans<<'\n';
        }
    }
    return 0;
}
