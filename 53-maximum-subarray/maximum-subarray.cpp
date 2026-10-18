class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0], maxSum = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            curSum = max(nums[i], curSum + nums[i]);
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};