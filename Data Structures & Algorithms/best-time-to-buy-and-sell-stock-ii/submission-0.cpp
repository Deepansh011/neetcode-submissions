class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int prof = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                prof +=  nums[i]-nums[i-1];
            }
        }
      return prof;  
        
    }
};