class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        int possible;
        if (target > nums[end]) {
            return end + 1;
        }
        if (target < nums[st]) {
            return 0;
        }
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (target == nums[mid]) {
                return mid;
            }
            if (mid >= 1) {
                if (nums[mid - 1] < target && nums[mid] > target) {
                    possible = mid;
                }
            }
            if (target > nums[mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return possible;
    }
};