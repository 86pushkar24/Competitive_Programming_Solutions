// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[12];
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    int sum=0;
    int count=0;
    for(int i=11;i>=0;i--)
    {
        if(sum<n)
        {
            sum=sum+a[i];
             count++;
            // cout<<sum<<"SUM"<<endl;
        }
        if(sum>=n)
        {
          cout<<count;
          exit(0);
          break;
        }
         
            }
            // cout<<"SFD";
    if(sum<n)
    {
        cout<<-1;
    }
    return 0;
}
