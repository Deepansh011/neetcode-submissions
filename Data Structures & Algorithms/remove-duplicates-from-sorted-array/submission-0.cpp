class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int r =1;
        int n = nums.size();
        for(int i=1;i<n;i++){
           if(nums[i]!=nums[i-1]){
                 nums[r++]= nums[i];
            }
        } return r;
    }
};