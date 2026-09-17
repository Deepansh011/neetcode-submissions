class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int j = 0;
        int k = nums.size()-1;
        while(j<k){
            if(nums[j]+nums[k]==t){
                return {j+1,k+1};
            }
            if(nums[j]+nums[k]>t){
                k--;
            }
            if(nums[j]+nums[k]<t){
                j++;
            }
        }
        
    }
};
