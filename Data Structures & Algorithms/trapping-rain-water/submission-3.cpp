class Solution {
public:
    int trap(vector<int>& nums) {
     int mex = 0;
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int lm = nums[l];
        int rm = nums[r];
        int p=0;


        while(l<r){
            if(lm<rm){
                l++;
                lm = max(lm, nums[l]);
                p+=lm - nums[l];
                


            }
            else{
                r--;
                rm = max(rm, nums[r]);
                p+=rm-nums[r];
                

            }
        }   
              
    return p;}
};
