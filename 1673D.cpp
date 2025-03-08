#include<bits/stdc++.h>
using namespace std;
vector<long long> getDivisors(long long n){
    vector<long long> divisors;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    return divisors;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long b,bd,bn,c,cd,cn;
        cin>>b>>bd>>bn;
        cin>>c>>cd>>cn;
        if(cd%bd!=0||(c-b)%bd!=0||b>c||b+bd*(bn-1)<c+cd*(cn-1)){
            cout<<0<<endl;
            continue;
        }
        if(b+bd*(bn-1)<c+cd*cn||c-cd<b){
            cout<<-1<<endl;
            continue;
        }
        vector<long long> factors=getDivisors(cd);
        long long result=0,mod=1000000007;
        for(auto &D:factors){
            if(b+bd*(bn-1)<c+D*cn||c-D<b){
                cout<<-1<<endl;
                continue;
            }
            if((bd*D)/__gcd(bd,D)<cd)
                continue;
            result+=(((cd/D)-(!(cd%D))+1)*((cd/D)-(!(cd%D))+1))%mod;
        }
        cout<<result<<endl;
    }
    return 0;
}
