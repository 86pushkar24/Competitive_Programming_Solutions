// @prefix cpp
// @description 

// #include <stdcpp.h>
#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push(){
     int n,a=0,b=0,c=0,d=0,f=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        int t;
	        cin>>t;
	        if(t==1)
	        a++;
	        else if(t==2)
	        b++;
	        else if(t==3)
	        c++;
	        else
	        d++;
	    }
	    f+=d;
	    if(c<a){
	        f+=c;
	        a-=c;
	        c=0;
	    }
	    else if(a<=c){
	        f+=a;
	        c-=a;
	        a=0;
	    }
	    if(c>0){
	        f+=c;
	        c=0;
	    }
	    if(b>0){
	        f+=b/2;
	        b%=2;
	    }
	    int l=a+(b*2);
	    if(l<=4&&l>0)
	    f+=1;
	    else if(l%4!=0)
	    f+=(l/4)+1;
	    else
	    f+=l/4;
	    cout<<f<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    // cin >> tc; 
    while (tc--){
    push();
    }
}

