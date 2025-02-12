#include "bits/stdc++.h"
int main(){
    long long tc;
    std::cin>>tc;
    while(tc--){
        long long n;
        std::cin>>n;
        long long x;
        if(n==1){
            std::cout<<'a'<<std::endl;
            continue;
        }
        if(n%2==0){
            x=n/2;
            x--;
        }
        else{
            x=(n/2);
            x--;
        }
        long long z=n-x-x-1;
        for(long long i=0;i<x;i++) std::cout<<'a';
        for(long long i=0;i<z;i++) std::cout<<char('c'+i);
        for(long long i=0;i<x+1;i++) std::cout<<'a';
        std::cout << std::endl;
    }
    return 0;
}
