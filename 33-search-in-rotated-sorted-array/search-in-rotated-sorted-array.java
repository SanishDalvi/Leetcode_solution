class Solution {
    public int search(int[] A, int tar) {
    int st = 0, end = A.length - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (A[mid] == tar) {
            return mid;
        }

        // Left half is sorted
        if (A[st] <= A[mid]) {
            if (A[st] <= tar && tar <= A[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (A[mid] <= tar && tar <= A[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

}