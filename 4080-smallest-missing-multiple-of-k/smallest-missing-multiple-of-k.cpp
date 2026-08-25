class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> multi;
        for (int i : nums) {
            if (i % k == 0) {
                multi.insert(i / k);
            }
        }
        for (int i = 0; i < multi.size(); i++) {
            if (multi.find(i + 1) == multi.end()) {
                return (i + 1) * k;
            }
        }
        return (multi.size() + 1) * k;
    }
};