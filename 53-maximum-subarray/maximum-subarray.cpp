class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currsum =0;
        int maxsum = INT_MIN;
        for(int i=0;i<n;i++){
            currsum += nums[i];
            maxsum = max(currsum , maxsum);

            if(currsum < 0){
                currsum =0;
            }
        }
        return maxsum;
    }
};