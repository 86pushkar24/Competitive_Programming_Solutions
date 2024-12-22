/*                                          जय श्री राधे कृष्णा।                                                         */
// Pushkar Gupta's Solution Starts Here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> v1(m);
        for(int i(0);i<m;i++) cin>>v1[i];
        vector<int>v3(k);
        for(int i(0);i<k;i++) cin>>v3[i];
        vector<bool> v2(n+1,false);
        for(int q:v3) v2[q]=true;
        vector<int> v4;
        for(int i=1;i<=n;i++) if(!v2[i]) v4.push_back(i);
        int sz=v4.size();
        string res(m,'0');
        if(sz==0) for(int i=0;i<m;i++) res[i]='1';
        else if(sz==1){
            int k=v4[0];
            for(int i=0;i<m;i++) if(v1[i]==k) res[i]='1';
        }
        cout<<res<<"\n";
    }
    return 0;
}
