#include "bits/stdc++.h"
using namespace std;
bool chk(vector<int> &v){
    int cur=0,n=v.size();
    int mx=LLONG_MIN;
    for (int i=0;i<n;i++){
        if (cur<=0){ 
            cur=0;
            mx=v[i];
        }
        cur+=v[i];
        mx=max(mx, v[i]);
        if(cur>mx)return false;
    }
    return true;
}
void push() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (auto&it:v)cin>>it;
    vector<int> a=v;
    sort(a.begin(),a.end());
    cout<<(chk(v)||chk(a)?"YES":"NO")<<'\n';
}
int main() {
    int tc;
    cin>>tc;
    while (tc--)push();
    return 0;
}
