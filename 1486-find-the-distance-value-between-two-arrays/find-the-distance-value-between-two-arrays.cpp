class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int n = arr2.size() - 1, ans = 0;
        for (int i : arr1) {
            int st = 0, end = n;
            bool found = false;
            while (st <= end) {
                int mid = st + (end - st) / 2;
                if (abs(i - arr2[mid]) <= d) {
                    found = true;
                    break;
                } else if (arr2[mid] < i) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            if (!found)
                ans++;
        }
        return ans;
    }
};