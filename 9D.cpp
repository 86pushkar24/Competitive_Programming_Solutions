#include "bits/stdc++.h"
using namespace std;
int main(){
    long long n,h,i,j,k,d[36][36];
    cin>>n>>h;
    for(;i<=n;)d[0][i++]=1;
    for(i=1;i<=n;i++)for(j=1;j<=n;j++)for(k=0;k<i;k++)d[i][j]+=d[k][j-1]*d[i-k-1][j-1];
    cout<<d[n][n]-d[n][h-1];
}