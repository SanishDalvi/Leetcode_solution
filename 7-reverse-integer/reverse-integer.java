class Solution {
    public int reverse(int n) {
        int revNum = 0;

    while (n != 0) {
        int dig = n % 10;

        if (revNum > Integer.MAX_VALUE / 10 ||
            revNum < Integer.MIN_VALUE / 10) {
            return 0;
        }

        n /= 10;
        revNum = revNum * 10 + dig;
    }

    return revNum;
    }
}