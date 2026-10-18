class Solution {
public:
    int binaryst(vector<int>& nums, int tar) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == tar) {
                if (mid == 0 || nums[mid - 1] != tar) {
                    return mid;
                }
                end = mid - 1;
            } else if (nums[mid] < tar) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    int binaryend(vector<int>& nums, int tar) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == tar) {
                if (mid == nums.size() - 1 || nums[mid + 1] != tar) {
                    return mid;
                }
                st = mid + 1;
            } else if (nums[mid] < tar) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return vector<int>{binaryst(nums, target), binaryend(nums, target)};
    }
};