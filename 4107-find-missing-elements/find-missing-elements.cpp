class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        vector<int> ans;
        for (int x = min; x <= max; x++) {
            if (!st.count(x))
                ans.push_back(x);
        }
        return ans;
    }
};