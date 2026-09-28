class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
    unordered_map<string, string> m;

    for (auto& vec : knowledge) {
        m[vec[0]] = vec[1];
    }

    string ans;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            string key;
            i++;

            while (s[i] != ')') {
                key += s[i];
                i++;
            }

            if (m.contains(key)) {
                ans += m[key];
            } else {
                ans += '?';
            }
        } else {
            ans += s[i];
        }
    }

    return ans;
}

};