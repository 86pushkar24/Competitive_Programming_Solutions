#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a1=(k+n-1)/n;
        int a2=m-a1+1;
        cout<<((a1+a2-1)/a2)<<endl;
    }
}