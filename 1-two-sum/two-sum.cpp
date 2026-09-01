class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> need;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (!need.empty() && need.find(temp) != need.end()) {
                return {i, need[temp]};
            }
            need[nums[i]] = i;
        }
        return {};
    }
};