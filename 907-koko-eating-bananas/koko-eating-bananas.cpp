class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int end = *max_element(piles.begin(), piles.end());
        int st = 1;
        int ans = end;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            long long calh = 0;
            for (int i : piles) {
                calh += (i + mid - 1) / mid;
            }
            if (calh > h) {
                st = mid + 1;
            } else {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans;
    }
};