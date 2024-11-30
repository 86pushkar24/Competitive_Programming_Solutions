// @prefix cpp
// @description 

#include <stdcpp.h>
// #include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void push() {
    int numberOfStudents, time;
    string str;
    cin >> numberOfStudents >> time >> str;
    
    for (int j = 0; j < time; j++) {
        for (int i = 0; i < numberOfStudents - 1; i++) {
            if (str[i] == 'B' && str[i + 1] == 'G') {
                swap(str[i], str[i + 1]);
                i++;
            }
        }
    }

    cout << str << endl;
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

