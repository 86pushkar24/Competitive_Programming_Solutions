#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<int> pattern = {1, 2, 3};
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> result;
        
        for (int i = 0; i < n; ++i) {
            result.push_back(pattern[i % 3]);
        }
        
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
