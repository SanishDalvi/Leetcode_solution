class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(n==0) return;
    else if (m==0){
        nums1=nums2;
        return;
    }
    vector<int> result;
    int i=0,j=0;
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            result.push_back(nums1[i++]);
        }else{
            result.push_back(nums2[j++]);
        }
    }        
    while(i<=m-1 && m>0){
        result.push_back(nums1[i++]);
    }
    while(j<=n-1 && n>0){
        result.push_back(nums2[j++]);
    }
    nums1 =result; 
    }
};