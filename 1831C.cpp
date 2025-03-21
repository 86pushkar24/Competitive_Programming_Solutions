#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {  
        int n;
        cin >> n;
        vector<pair<int ,int>> edges;
        for (int i = 0; i < n-1; i++)
        {
            int a,b;
            cin >> a>>b;
            edges.push_back({a, b});
        }
        set<int> s;
        s.insert(1);
        int ans = 0;
        while (s.size()!=n)
        {
            for(int i = 0; i < n-1; i++){
                int k = edges[i].first;
                if(s.find(k) == s.end()){
                    continue;
                }
                if(s.find(edges[i].second) == s.end() && s.find(k) != s.end()){
                    s.insert(k);
                    s.insert(edges[i].second);
                }
                if(s.size() == n){
                    break;
                }
            }
            ans++;
        }
        cout << ans << endl;
    }
    
}