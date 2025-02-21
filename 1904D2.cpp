#include<bits/stdc++.h>
using namespace std;
void check(vector<int>&a, vector<int>&b, vector<int>&marked){
    int n=a.size();
    vector<int> pmax(n,-1), pmin(n,-1);
    stack<int> s;
    vector<int> lasta(n+1,-1), lastb(n+1,-1);
    for(int i=n-1;i>=0;i--){
        while(s.size()>0&&s.top()<=a[i])s.pop();
        if(s.size()==0)s.push(a[i]);
        else{
            pmax[i]=s.top();
            s.push(a[i]);
        }
    }
    while(s.size())s.pop();
    for(int i=0;i<n;i++)b[i]*=-1;
    for(int i=0;i<n;i++){
        while(s.size()>0&&s.top()<=b[i])s.pop();
        if(s.size()==0)s.push(b[i]);
        else{
            pmin[i]=abs(s.top());
            s.push(b[i]);
        }
    }
    for(int i=0;i<n;i++){
        bool ok=false;
        b[i]*=-1;
        if(i>0&&!marked[i]&&lasta[b[i]]!=-1){
            int ind=lasta[b[i]];
            int mini=pmin[i];
            int maxi=pmax[ind];
            if(maxi!=-1){
                int ind1=lasta[maxi];
                if(ind1>=ind)
                    ok=true;
            }
            if(mini!=-1){
                int ind2=lastb[mini];
                if(ind2>=ind)ok=true;
            }
            if(!ok)marked[i]=1;
        }
        {
            lasta[a[i]]=i;
            lastb[b[i]]=i;
        }
    }
}
signed main(){
    int tt;
    cin>>tt;
    for(int k=1;k<=tt;k++){
        string s="";
        string t="-";
        int n;
        cin>>n;
        s+=to_string(n);
        s+=t;
        vector<int> a(n), b(n);
        bool ok=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=to_string(a[i]);
            s+=t;
        }
        vector<int> marked(n,0);
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<a[i])ok=true;
            if(b[i]==a[i])marked[i]=1;
            s+=to_string(b[i]);
            s+=t;
        }
        if(ok){
            cout<<"NO\n";
            continue;
        }
        check(a,b,marked);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        reverse(marked.begin(),marked.end());
        check(a,b,marked);
        reverse(marked.begin(),marked.end());
        for(int i=0;i<n;i++)if(!marked[i])ok=true;
        if(ok)cout<<"NO\n";
        else cout<<"YES\n";
    }
};