#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int maxn=2e5+5;
        char s[maxn];
        cin>>(s+1);
        int n=strlen(s+1);
        int cnt[2]={0};
        for(int i=1;i<=n;i++){
            if(s[i]=='(')cnt[0]++;
            else if(s[i]==')')cnt[1]++;
        }
        if(cnt[0]==n/2||cnt[1]==n/2){
            cout<<"YES"<<'\n';
            continue;
        }
        int left=n/2-cnt[0];
        int maxl=0,minr=maxn;
        for(int i=1;i<=n;i++){
            if(s[i]=='?'){
                if(left){
                    left--,s[i]='(';
                    maxl=max(maxl,i);
                }
                else{
                    s[i]=')';
                    minr=min(minr,i);
                }
            }
        }
        swap(s[maxl],s[minr]);
        bool ans=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=(s[i]=='('?1:-1);
            if(sum<0){
                ans=1;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<'\n';
    }
}
