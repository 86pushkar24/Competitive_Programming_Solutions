// cc-19
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<char>> grid(n+1,vector<char>(m+1));
    int num(0),good(0),bad(0),till(0);
    for(int i=1;i<=n;i+=1)for(int j=1;j<=m;j+=1){
            cin>>grid[i][j];
            if(grid[i][j]=='*'){
                num+=1;
                till+=1;
            }
        }
    auto cell=[&](int x)->pair<int,int> {
        int col=x/n+1;
        int row=(x%n);
        if(row==0)col-=1,row=n;
        return make_pair(row,col);
    };
    auto numb=[&](int r,int c)->int {
        return (c-1)*n+r;
    };
    int ct(0);
    for(int j=1;j<=m;j+=1)for(int i=1;i<=n;i+=1)
            if(ct<till){
                ct+=1;
                if(grid[i][j]=='*')good+=1;
            }
    bad=num-good;
    while(q--){
        int x,y;
        cin>>x>>y;
        if(grid[x][y]=='*'){
            int tt=numb(x,y);
            if(tt<=till)good-=1;
            else bad-=1;
            grid[x][y]='.';
            till-=1;
            auto [r,c]=cell(till+1);
            if(grid[r][c]=='*'){
                good-=1;
                bad+=1;
            }
            cout<<bad<<endl;
        }
        else{
            int tt=numb(x,y);
            if(tt<=till)good+=1;
            else bad+=1;
            grid[x][y]='*';
            till+=1;
            auto [r,c]=cell(till);
            if(grid[r][c]=='*'){
                good+=1;
                bad-=1;
            }
            cout<<bad<<endl;
        }
    }
}