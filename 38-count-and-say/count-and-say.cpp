class Solution {
public:
    string RLE(string s) {
        int freq = 1;
        char at = s[0];
        string ans = "";
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == at) {
                freq++;
            } else {
                ans = ans + to_string(freq);
                ans = ans + at;
                at = s[i];
                freq = 1;
            }
        }
        ans = ans + to_string(freq);
        ans = ans + at;
        return ans;
    }

    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        string inp = "1";
        for (int i = 2; i <= n; i++) {
            inp = RLE(inp);
        }
        return inp;
    }
};