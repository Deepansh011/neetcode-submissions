class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i =0; i<n; i++){
            int j = i+1;
            int k = n-1;
            if(nums[i]>0) break;
            if(i>0&& nums[i]==nums[i-1]){continue;}
            
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++; k--;
                    
                    while( j < k && nums[k]==nums[k+1]) {k--;}
                    
                    while( j < k && nums[j]==nums[j-1]) {j++;}
                    
                    
                    
                    
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }

            }
        }

   return ans; }
};
