class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> ans(temperatures.size(), 0);
        for (int i = temperatures.size() - 1; i >= 0; i--) {
            while (!st.empty() && temperatures[i] >= st.top().first) {
                st.pop();
            }
            if (!st.empty()) {
                ans[i] = st.top().second - i;
            }
            st.push(pair(temperatures[i], i));
        }
        return ans;
    }
};