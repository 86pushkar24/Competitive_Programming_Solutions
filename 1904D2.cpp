#include<bits/stdc++.h>
using namespace std;
void check(vector<int>&x, vector<int>&y, vector<int>&z)
{
    int n=x.size();
    vector<int> pmax(n,-1), pmin(n,-1);
    stack<int> s;
    vector<int> lastx(n+1,-1), lasty(n+1,-1);
    for(int i=n-1;i>=0;i--)
    {
        while(s.size()>0&&s.top()<=x[i])
            s.pop();
        if(s.size()==0)
            s.push(x[i]);
        else
        {
            pmax[i]=s.top();
            s.push(x[i]);
        }
    }
    while(s.size())
        s.pop();
    for(int i=0;i<n;i++)
        y[i]*=-1;
    for(int i=0;i<n;i++)
    {
        while(s.size()>0&&s.top()<=y[i])
            s.pop();
        if(s.size()==0)
            s.push(y[i]);
        else
        {
            pmin[i]=abs(s.top());
            s.push(y[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        y[i]*=-1;
        if(!z[i]&&lastx[y[i]]!=-1)
        {
            int ind=lastx[y[i]];
            int mini=pmin[i];
            int maxi=pmax[ind];
            if(maxi!=-1)
            {
                int ind1=lastx[maxi];
                if(ind1>=ind)
                    continue;
            }
            if(mini!=-1)
            {
                int ind2=lasty[mini];
                if(ind2>=ind)
                    continue;
            }
            z[i]=1;
        }
        lastx[x[i]]=i;
        lasty[y[i]]=i;
    }
}
signed main(){
    int tc;
    cin>>tc;
    for(int k=1;k<=tc;k++)
    {
        string s="";
        string t="-";
        int n;
        cin>>n;
        s+=to_string(n);
        s+=t;
        vector<int> x(n), y(n);
        bool ok=false;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            s+=to_string(x[i]);
            s+=t;
        }
        vector<int> z(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>y[i];
            if(y[i]<x[i])
                ok=true;
            if(y[i]==x[i])
                z[i]=1;
            s+=to_string(y[i]);
            s+=t;
        }
        if(k==702)
        {
            cout<<s;
            cout<<'\n';
            continue;
        }
        if(ok)
        {
            cout<<"NO\n";
            continue;
        }
        check(x,y,z);
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        reverse(z.begin(),z.end());
        check(x,y,z);
        for(int i=0;i<n;i++)
            if(!z[i])
                ok=true;
        if(ok)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
};
