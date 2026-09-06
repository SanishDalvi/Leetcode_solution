class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;

        vector<int> left(n), right(n);
        stack<int> st;
        // Next smaller element
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        // Previous smaller element
        st = stack<int>();
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        int ret = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            ret = max(ret, nums[i] * width);
        }
        return ret;
    }
};