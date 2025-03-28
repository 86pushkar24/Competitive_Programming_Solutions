#include<bits/stdc++.h>
using namespace std;

vector<pair<long long,long long>> ans;
vector<long long> a,sum;

void findpath(int f,int l){
    if(f==l){
        if(a[f]==1)return;
        if(a[f]!=0){
            a[f]=0;
            ans.push_back({f,f});
        }
        a[f]=1;
        ans.push_back({f,f});
        return;
    }
    for(int i=f;i<l;i++)findpath(i,l-1);
    if(a[l]!=0){
        a[l]=0;
        ans.push_back({l,l});
    }
    ans.push_back({f,l});
    for(int i=f;i<=l;i++)a[i]=l-f+1;
}

int main(){
    int n;
    cin>>n;
    a.resize(n);
    sum.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum[i]=a[i];
        if(i)sum[i]+=sum[i-1];
    }
    vector<long long>dp(n);
    vector<array<long long,3>>path[n];
    for(int i=0;i<n;i++){
        long long mx=0;
        for(int j=0;j<i;j++){
            for(int k=j+1;k<=i;k++){
                long long s=sum[i]-sum[k-1],m=(i-k+1)*(i-k+1);
                if(s>=m){
                    if(dp[j]+s>mx){
                        mx=dp[j]+s;
                        path[i].clear();
                        path[i].push_back({0,j,0});
                    }
                }
                else{
                    if(dp[j]+m>mx){
                        mx=dp[j]+m;
                        path[i].clear();
                        path[i].push_back({1,k,i});
                        path[i].push_back({0,j,0});
                    }
                }
            }
        }
        if(sum[i]>=(i+1)*(i+1)&&sum[i]>mx){
            mx=sum[i];
            path[i].clear();
        }
        else if(sum[i]<(i+1)*(i+1)&&(i+1)*(i+1)>mx){
            mx=(i+1)*(i+1);
            path[i].clear();
            path[i].push_back({1,0,i});
        }
        dp[i]=mx;
    }
    cout<<dp[n-1]<<" ";
    int i=n-1;
    while(path[i].size()!=0&&path[i][path[i].size()-1][0]==0){
        int temp;
        for(int j=0;j<path[i].size();j++){
            if(path[i][j][0]==1)findpath(path[i][j][1],path[i][j][2]);
            else temp=path[i][j][1];
        }
        i=temp;
    }
    for(int j=0;j<path[i].size();j++)if(path[i][j][0]==1)findpath(path[i][j][1],path[i][j][2]);
    cout<<ans.size()<<"\n";
    for(auto x:ans)cout<<x.first+1<<" "<<x.second+1<<"\n";
    return 0;
}
