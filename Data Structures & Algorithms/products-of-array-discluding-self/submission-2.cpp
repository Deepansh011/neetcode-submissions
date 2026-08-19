class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>x(n,1);
        for(int i=1; i<n; i++){
            x[i]= x[i-1] * nums[i-1];
        }
        int z = 1;
         for(int i=n-1; i>=0; i--){
            x[i]*=z;
            z*=nums[i];
         }
   return x; }
};
