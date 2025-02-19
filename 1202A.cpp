#include "bits/stdc++.h"
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string a, b;
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int i = 0, j = 0;
        for (i = 0; i < b.length(); i++)
        {
            if (b[i] == '1')
                break;
        }
        for (j = i; j < a.length(); j++)
        {
            if (a[j] == '1')
                break;
        }
        cout << (j - i) << "\n";
    }
}