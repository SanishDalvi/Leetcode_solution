class Solution {
public:
    int countCommas(int n) {
        int digits = log10(n) + 1;
        if (digits == 6) {
            return 99001;
        } else {
            if(n - 999 >=0) return n-999;
            else return 0;
        }
    }
};