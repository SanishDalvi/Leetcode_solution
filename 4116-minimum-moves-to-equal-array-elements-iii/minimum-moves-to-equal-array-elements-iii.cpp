class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += (nums[n - 1] - nums[i]);
        }
        return ans;
    }
};