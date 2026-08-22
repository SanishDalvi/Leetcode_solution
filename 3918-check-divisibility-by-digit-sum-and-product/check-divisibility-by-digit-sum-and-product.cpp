class Solution {
public:
    bool checkDivisibility(int n) {
        long digitSum = 0;
        long digitPro = 1;
        int ncopy = n;
        while (n > 0) {
            int digit = n % 10;
            digitSum += digit;
            digitPro *= digit;
            n/=10;
        }
        if (ncopy % (digitPro + digitSum) == 0) {
            return true;
        }
        return false;
    }
};