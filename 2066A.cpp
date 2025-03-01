#include<bits/stdc++.h>
using namespace std;
void push()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int b(0),a1(0),a2(0);
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        c--;
        if(a[c]==0)
            b++;
        a[c]=1;
        if(c==0)
            a1=i;
        if(c==n-1)
            a2=i;
    }
    if(b==n)
    {
        cout<<"? "<<a1+1<<' '<<a2+1<<endl;
        int b1;
        cin>>b1;
        cout<<"? "<<a2+1<<' '<<a1+1<<endl;
        int b2;
        cin>>b2;
        if(b1<n-1||b2<n-1)
        {
            cout<<"! A"<<endl;
        }
        else
        {
            cout<<"! B"<<endl;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                cout<<"? "<<i+1<<' '<<(i+1)%n+1<<endl;
                int b;
                cin>>b;
                if(b==0)
                    cout<<"! A"<<endl;
                else
                    cout<<"! B"<<endl;
                return;
            }
        }
    }
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
        push();
    return 0;
}
