#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t=1;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v;
        for(int i=1;i<=(1<<n);i++)
            v.push_back(i);
        if(n==2){
            cout<<"? "<<1<<' '<<2<<endl;
            long long x;
            cin>>x;
            if(x==2){
                cout<<"! "<<2<<endl;
            }
            else
                cout<<"! "<<1<<endl;
            return 0;
        }
        for(int i=1;i<=n;++i){
            vector<long long> tmp;
            if(v.size()==2){
                cout<<"? "<<v[0]<<' '<<v[1]<<endl;
                long long x;
                cin>>x;
                if(x==1)
                    cout<<"! "<<v[0]<<endl;
                else
                    cout<<"! "<<v[1]<<endl;
                return 0;
            }
            if(v.size()==1){
                cout<<"! "<<v[0]<<endl;
                return 0;
            }
            for(int j=0;j<v.size();++j)
                if(j%4==0){
                    cout<<"? "<<v[j]<<' '<<v[j+2]<<endl;
                    long long x;
                    cin>>x;
                    if(x==0){
                        cout<<"? "<<v[j+1]<<' '<<v[j+3]<<endl;
                        long long y;
                        cin>>y;
                        y!=1?tmp.push_back(v[j+3]):tmp.push_back(v[j+1]);
                    }
                    else if(x==1){
                        cout<<"? "<<v[j]<<' '<<v[j+3]<<endl;
                        long long y;
                        cin>>y;
                        y!=1?tmp.push_back(v[j+3]):tmp.push_back(v[j]);
                    }
                    else{
                        cout<<"? "<<v[j+1]<<' '<<v[j+2]<<endl;
                        long long y;
                        cin>>y;
                        y!=1?tmp.push_back(v[j+2]):tmp.push_back(v[j+1]);
                    }
                }
            v=tmp;
        }
    }
    return 0;
}
