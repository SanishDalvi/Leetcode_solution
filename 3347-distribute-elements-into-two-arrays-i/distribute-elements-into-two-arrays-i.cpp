class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1, arr2;
        for (int i : nums) {
            if (arr1.empty()) {
                arr1.push_back(i);
                continue;
            }
            if (arr2.empty()) {
                arr2.push_back(i);
                continue;
            }
            if (arr1.back() > arr2.back()) {
                arr1.push_back(i);
            } else {
                arr2.push_back(i);
            }
        }
        arr1.reserve(arr1.size() + arr2.size());
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};