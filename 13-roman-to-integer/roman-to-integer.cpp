class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m = {{'I', 1},   {'V', 5},   {'X', 10},
                                      {'L', 50},  {'C', 100}, {'D', 500},
                                      {'M', 1000}};
        int n = s.length();
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) {
                ans += m[s[i]];
            } else {
                if (m[s[i]] < m[s[i + 1]]) {
                    ans -= m[s[i]];
                } else {
                    ans += m[s[i]];
                }
            }
        }
        return ans;
    }
};