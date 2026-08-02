class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> set;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(set.find(need)!=set.end()){
                return {i,set[need]};
            }
            set[nums[i]]=i;
        }
        return {-1,-1};
    }
};