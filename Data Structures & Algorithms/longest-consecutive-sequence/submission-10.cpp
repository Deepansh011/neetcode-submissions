class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        map<int , int >m;
        for(auto &x : nums){
            m[x]++;
        }
        int cnt = 0;
        int ms = 1;
        int prev =0 ;
        for(auto &p : m){
            if(p.first == prev+1){
                cnt++;
                ms= max(ms, cnt);
               
            }
            else cnt =1;
            prev = p.first;
               
        }
        
    return ms;}
};
