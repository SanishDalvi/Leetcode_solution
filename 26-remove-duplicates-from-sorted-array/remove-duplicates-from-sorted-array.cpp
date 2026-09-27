class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1,p=nums[0];
       
	    for(int i=1;i<nums.size();i++){
	    	if(nums[i]!=p){
            nums[k]=nums[i];
			k++;
			p=nums[i];
			}
	    	else{
	    		nums[i]=102;
			}
			
		}
        return k;
    }
};