class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int st = 0, end = n;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] > x)
                end = mid;
            else
                st = mid + 1;
        }
        end = st;
        st--;
        while (end - st - 1 < k) {
            if (st < 0) {
                end++;
            } else if (end >= n) {
                st--;
            } else if (x - arr[st] <= arr[end] - x) {
                st--;
            } else
                end++;
        }
        return vector<int>(arr.begin() + st + 1, arr.begin() + end);
    }
};