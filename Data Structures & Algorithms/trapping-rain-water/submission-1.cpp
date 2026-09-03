class Solution {
public:
    int trap(vector<int>& h) {
         if (h.empty()) {
            return 0;
        }
        int n = h.size();
        int l =  0;
        int r = n-1;
        int leftMax = h[l], rightMax = h[r];
        int ans=0;
        while(l<r){

            if (leftMax < rightMax) {
                l++;
                leftMax = max(leftMax, h[l]);
                ans += leftMax - h[l];
            }
            else {
                r--;
                rightMax = max(rightMax, h[r]);
                ans += rightMax - h[r];
            }
        }

      return ans;  
    }
};
