// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 1, end = n;
        while (st <= end) {
            int mid = st + (end-st) / 2;
            if (isBadVersion(mid - 1) != isBadVersion(mid)) {
                return mid;
            } else if (isBadVersion(mid) == false) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};