#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

void clear(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    int m = (a*b*c*d)%100;
    if(m <10){
        cout << 0 << endl;
    }
    else{
        cout << m;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    clear();
}

