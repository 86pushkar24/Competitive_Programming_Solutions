// #include<bits/stdc++.h>
#include<stdcpp.h>
using namespace std;

vector<int> fnn(string &s){
    int n=s.size();
    vector<int>Z(n);
    int l=0,r=0;
    Z[0]=n;
    for(int i=1;i<n;i++){
        if(i>r){
            l=r=i;
            while(r<n&&s[r-l]==s[r])
                r++;
            r--;
            Z[i]=r-l+1;
        }else{
            int j=i-l;
            if(Z[j]<r-i+1)
                Z[i]=Z[j];
            else{
                l=i;
                while(r<n&&s[r-l]==s[r])
                    r++;
                r--;
                Z[i]=r-l+1;
            }
        }
    }
    return Z;
}
void push(){
    string s;
    cin>>s;
    vector<int>z=fnn(s);
    int n=s.size();
    multiset<int>ms;
    map<int,int>m;
    for(int i=1;i<n;i++){
       m[z[i]]++;
       ms.insert(z[i]);
      // cout<<z[i]<<" ";
    }//cout<<endl;
    int id=-1;
    for(int i=n-1;i>0;i--){
        ms.erase(ms.find(z[i]));
        if(m[n-i]>1&&z[i]==n-i){
            id=i;
        }else if(z[i]==n-i&&not(ms.lower_bound(z[i])==ms.end())){
            id=i;
        }
    }
    if(id==-1){
        cout<<"Just a legend";
    }else{
        string ans;
        for(int i=id;i<n;i++) ans+=s[i];
            cout<<ans<<endl;
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc=1;
    //cin>>tc;
    while(tc--){
        push();
    }
    return 0;
}
