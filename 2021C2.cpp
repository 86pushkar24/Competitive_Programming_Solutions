#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> a(n),b(m),c(n);
        for(int i=0;i<n;i++)cin>>a[i],a[i]--,c[a[i]]=i;
        for(int i=0;i<m;i++)cin>>b[i],b[i]--,b[i]=c[b[i]];
        set<int> s;
        int ans=0;
        auto erase=[&](int d){
            auto x=s.lower_bound(d);
            auto y1=next(x),y2=prev(x);
            if(y1!=s.end()){
                if(b[*y1]==b[d]+1)ans--;
                if(x!=s.begin()){
                    if(b[d]==b[*y2]+1)ans--;
                    if(b[*y1]==b[*y2]+1)ans++;
                }
                else{
                    if(b[d]==0)ans--;
                    if(b[*y1]==0)ans++;
                }
            }
            else{
                if(x!=s.begin())if(b[d]==b[*y2]+1)ans--;
                else if(b[d]==0)ans--;
            }
            s.erase(d);
        };
        auto add=[&](int d)->void {
            if(s.size()==0){
                if(b[d]==0)ans++;
                s.insert(d);
                return;
            }
            auto y1=s.lower_bound(d);
            auto y2=prev(y1);
            if(y1!=s.end()){
                if(y1!=s.begin()){
                    if(b[*y1]==b[*y2]+1)ans--;
                    if(b[*y1]==b[d]+1)ans++;
                    if(b[d]==b[*y2]+1)ans++;
                }
                else{
                    if(b[*y1]==0)ans--;
                    if(b[d]==0)ans++;
                    if(1+b[d]==b[*y1])ans++;
                }
            }
            else if(b[d]==b[*y2]+1)ans++;
            s.insert(d);
        };
        vector<set<int>> v(n);
        for(int i=0;i<m;i++){
            if(v[b[i]].size()==0)add(i);
            v[b[i]].insert(i);
        }
        cout<<((ans==s.size()?"YA":"TIDAK"))<<'\n';
        while(q--){
            int i,t;
            cin>>i>>t;
            i--,t--;
            t=c[t];
            if(t==b[i]){
                cout<<((ans==s.size()?"YA":"TIDAK"))<<'\n';
                continue;
            }
            if(v[t].size()>0)erase(*v[t].begin());
            if(v[b[i]].size()>0)erase(*v[b[i]].begin());
            v[b[i]].erase(i);
            v[t].insert(i);
            int cur=b[i];
            b[i]=t;
            if(v[cur].size()>0)add(*v[cur].begin());
            if(v[t].size()>0)add(*v[t].begin());
            cout<<((ans==s.size()?"YA":"TIDAK"))<<'\n';
        }
    }
    return 0;
}
