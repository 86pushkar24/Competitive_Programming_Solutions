

#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
// #include<adhocproblems.h>
using namespace std;

int main()
{
    int input;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> input;

            if (input & 1)
            {   
                int moves = abs(j-3) + abs(i-3);
                cout << moves;
            }
        }
    }
    return 0;
}
