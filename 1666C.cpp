#include<bits/stdc++.h>
using namespace std;
long long ab(long long a){
    return (a<0?-a:a);
}
int main(){
    vector<pair<long long,long long>> v(3,make_pair(0,0));
    for(int i=0;i<3;i++)cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    bool flg=true,flg1=true;
    for(int i=0;i<2;i++){
        if(v[i].second>v[i+1].second)flg=false;
        if(v[i].second<v[i+1].second)flg1=false;
    }
    if(flg||flg1){
        cout<<4<<'\n';
        cout<<v[0].first<<' '<<v[0].second<<' '<<v[0].first<<' '<<v[1].second<<'\n';
        cout<<v[0].first<<' '<<v[1].second<<' '<<v[1].first<<' '<<v[1].second<<'\n';
        cout<<v[1].first<<' '<<v[1].second<<' '<<v[1].first<<' '<<v[2].second<<'\n';
        cout<<v[1].first<<' '<<v[2].second<<' '<<v[2].first<<' '<<v[2].second<<'\n';
    }
    else{
        cout<<3<<'\n';
        if(ab(v[0].second-v[1].second)<ab(v[2].second-v[1].second))swap(v[0],v[2]);
        cout<<v[0].first<<' '<<v[0].second<<' '<<v[0].first<<' '<<v[2].second<<'\n';
        cout<<v[0].first<<' '<<v[2].second<<' '<<v[2].first<<' '<<v[2].second<<'\n';
        cout<<v[1].first<<' '<<v[1].second<<' '<<v[1].first<<' '<<v[2].second<<'\n';
    }
    return 0;
}
