class Solution {
public:
    int minMoves(vector<int>& nums) {
        int check = INT_MIN;
        for (int i : nums) {
            check = max(check, i);
        }
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (check - nums[i]);
        }
        return ans;
    }
};