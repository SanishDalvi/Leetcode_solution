class Solution {
public:
    string convert(string s, int numRows) {\
        if(numRows==1) return s;
        vector<string> words(numRows, "");
        int i = 0;
        bool down = true;
        for (char ch : s) {
            words[i] += ch;
            if ((i == numRows - 1 && down) || (i == 0 && !down)) {
                down = !down;
            }
            if (down) {
                i++;
            } else {
                i--;
            }
        }
        string ans = "";
        for (string a : words) {
            ans += a;
        }
        return ans;
    }
};