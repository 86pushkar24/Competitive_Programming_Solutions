// #include <bits/stdc++.h>
#include <stdcpp.h>
using namespace std;
#define int long long
void push() {
    int n,f(0);
    cin>>n;
    string str; cin>>str;
    for (int i = 0; i < n; i++) f += str[i] == 'U';
    if(f % 2) cout<<"YES"<<endl; else cout<<"NO"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t = 1;
    cin>>t;
    while(t--) {
        push();
    }
    return 0;
}
