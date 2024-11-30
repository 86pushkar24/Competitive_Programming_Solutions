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

void push(){
    int N;
    string S;
    cin >> N;
    cin >> S;
    int current_absences = 0, max_attendance = 0;
  for (char c : S) {
    if (c == '1') {
      max_attendance++;
    } else {
      current_absences++;
      if (current_absences == 5) {
        max_attendance += 5;
        current_absences = 0;
      }
    }
  }
    cout << maxAttendance(S) << endl;

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

