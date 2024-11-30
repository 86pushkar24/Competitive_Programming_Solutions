#include <bits/stdc++.h>
using namespace std;
#define i64 long long
int cnt[10];
bool reply(int i , int j , int k){
    if(i != j and i != k and j != k)return (cnt[i] > 0 and cnt[j] > 0 and cnt[k] > 0);
    else if(i == j and i == k and j == k)return (cnt[i] >= 3);
    else{
        if(i == j) return (cnt[i] >= 2 and cnt[k] > 0);
        else if(i == k) return (cnt[i] >= 2 and cnt[j] > 0);
        else return (cnt[j] >= 2 and cnt[i] > 0);
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int tt ; cin >> tt;
    while(tt--){
        int n ; cin >> n ;
        memset(cnt , 0 , sizeof(cnt));
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x;
            x %= 10;
            cnt[x]++;
        }
        bool ver = 0;
        for(int i = 0 ; i <= 9 and !ver ; i++){
            for(int j = 0 ; j <= 9 and !ver; j++){
                for(int k = 0 ; k <= 9 and !ver; k++){
                    if(reply(i , j , k) and ((i + j + k)% 10 == 3)){
                        ver = 1;
                    }
                }
            }
        }
        cout << (ver ? "YES" : "NO") << '\n';        
    }

}
 