class Solution {
public:
    int trap(vector<int>& n) {
        int l = 0;
        int h = n.size();
        int r  = h-1;
        int lm = n[l];
        int rm = n[r];
        int res =0;
        while(l<r){
            if(lm<rm){
                l++;
                lm = max(lm,n[l]);
                res += lm- n[l];
            }
            else{
                r--;
                rm = max(rm,n[r]);
                res += rm-n[r];
            }
        }
        
    return res;}
};
