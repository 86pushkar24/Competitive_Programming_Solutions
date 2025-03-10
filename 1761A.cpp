#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if(n==a && n==b){
            cout<<"Yes"<<endl;
            continue;
        }
        if(a+b+1<n){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}