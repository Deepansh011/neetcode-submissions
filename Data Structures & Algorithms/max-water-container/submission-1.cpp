class Solution {
public:
    int maxArea(vector<int>& nums) {
        int mex = 0;
        int n = nums.size();
        int j = 0;
        int k = n-1;

        while(j<k){
            int area = 0;
            int lh = nums[j];
            int rh = nums[k];
            int hi =  min(lh,rh);
            int wi = k-j;


            area  = hi*wi;
            mex = max(area, mex);
            if(lh>rh){
                k--;
            }
            else j++;

    
        }

        return mex; 
    }
};
