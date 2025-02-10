// Practice clean code-5
#include "bits/stdc++.h"

int main(){
    int tc=1;
    std::cin>>tc;
    while(tc--){
        long long n,c,sum(0),diff(0),even(0),odd(0),v;
        std::cin>>n>>c;
        for(int i(0);i<n;i++){
            std::cin>>v;
            sum+=(v+2)/2;
            diff+=c+1-v;
            if(v%2!=1)even++;
            else odd++;
        }
        std::cout<<(c+1)*(c+2)/2-sum-diff+even*(even+1)/2+odd*(odd+1)/2<<'\n';
    }
}
