class Solution {
public:
    int trap(vector<int>& n) {
        int x = n.size();
        int res = 0;
        int l = 0;
        int r =x-1 ;
        int lm = n[l];
        int rm = n[r];
        while(l<r){
            if(lm<rm){
                l++;
                lm = max(lm, n[l]);
                res+=lm-n[l];
            }
            else {
                r--;
                rm = max(rm, n[r]);
                res+=rm-n[r];
            }
        }
        
        
   return res; }
};
