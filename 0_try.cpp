#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        map<long long, int> prefixSumMap;
        int subarrayCount(0);
        int sum(0);
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum == k)
            {
                subarrayCount++;
            }
            int rem = sum - k;
            if (prefixSumMap.find(rem) != prefixSumMap.end())
            {
                subarrayCount += prefixSumMap[rem];
            }
            prefixSumMap[sum]++;
        }
        return subarrayCount;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-5, -3, 0, -9, -6, 1, 5, -7, -1, 0, 3, 5, 9};
    int k = 0;
    cout << s.subarraySum(nums, k) << endl;
    return 0;
}