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
    vector<string> a(10);
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int score=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i][j]=='X'){
                if((i==0 || i==9) || (j==0 || j==9)) score+=1;
                else if( (i==1 || i==8) || (j==1 || j==8)) score+=2;
                else if((i==2 || i==7) || (j==2 || j==7)) score+=3;
                else if((i==3 || i==6) || (j==3 || j==6)) score+=4;
                else if((i==4 ||i==5) || (j==4 ||j==5)) score+=5;
            }
        }
    }
    cout<<score<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; 
    cin >> tc; 
    while (tc--){
    push();
    }
}

