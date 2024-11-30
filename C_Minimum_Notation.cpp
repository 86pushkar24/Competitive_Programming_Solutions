#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt; cin >> tt;
    while(tt--)
    {
        string s; cin >> s;

        map<int , int> m;
        map<int, int> n;

        for(auto &i : s) m[(i - '0')]++;

        for(int i =0 ; i < s.size(); i++)
        {
            int number = s[i] - '0';

            m[number]--;

            int flag = 0;

            for(int i = 0 ; i<= 9; i++)
            {
                if(m[i] > 0 && i < number)
                {
                    flag = 1;
                }
            }

            if(flag) n[min(number+1,9)]++;
            else n[number]++;
        }

        for(auto &i : n)
        {
            for(int ii = 0; ii < i.second; ii++) cout << i.first;
        }

        cout << endl;
    }
}
