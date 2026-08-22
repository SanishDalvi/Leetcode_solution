class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> res(prices.begin(), prices.end());
        for (int i = prices.size() - 1; i >= 0; i--) {
            while (!st.empty() && prices[i] < st.top()) {
                st.pop();
            }
            if (!st.empty()) {
                res[i] -= st.top();
            }
            st.push(prices[i]);
        }
        return res;
    }
};