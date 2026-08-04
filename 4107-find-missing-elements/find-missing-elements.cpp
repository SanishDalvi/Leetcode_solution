class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int st = nums.front(), end = nums.back();
        vector<int> result;
        int i = 0;
        while (i < nums.size() && end >= st) {
            if (nums[i] == st) {
                i++;
            } else {
                result.push_back(st);
            }
            st++;
        }
        return result;
    }
};