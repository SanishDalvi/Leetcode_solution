class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret = "";
        int i = 0;
        while (true) {
            if (strs[0][i] == '\0')
                return ret;
            char c = strs[0][i];
            for (string s : strs) {
                if (s[i] == '\0' || s[i] != c)
                    return ret;
            }
            ret += c;
            i++;
        }
        return ret;
    }
};