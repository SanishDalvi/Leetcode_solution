class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<int> s;
        vector<int> ans;
        int insert = 0;
        int remove = 0;
        while (insert < n) {
            while (s.size() < k - 1) {
                s.insert(nums[insert]);
                insert++;
            }
            s.insert(nums[insert]);
            int maxi = *s.rbegin();
            ans.push_back(maxi);
            s.erase(s.find(nums[remove]));
            insert++;
            remove++;
        }
        return ans;
    }
};