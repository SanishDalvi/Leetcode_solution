class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        while (i < n && s[i] == ' ') {
            i++;
        }
        bool negative = false;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                negative = true;
            }
            i++;
        }
        long long ans = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            if (ans > INT_MAX / 10 ||
                (ans == INT_MAX / 10 && digit > 7)) {
                if (negative)
                    return INT_MIN;
                else
                    return INT_MAX;
            }
            ans = ans * 10 + digit;
            i++;
        }
        if (negative) {
            ans = -ans;
        }
        return (int)ans;
    }
};