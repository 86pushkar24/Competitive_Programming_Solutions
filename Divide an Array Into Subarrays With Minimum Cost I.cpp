class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        sum += nums[0];
        
        sort(nums.begin() + 1, nums.end());
        
        sum = sum + nums[1];
        sum = sum + nums[2];
        
        return sum;
    }
};
