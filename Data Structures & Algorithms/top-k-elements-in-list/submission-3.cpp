class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<vector<int>> freq(nums.size() + 1);
        int n = nums.size();
        for(auto &x: nums){
            mp[x]++;
        }
         for(auto &x : mp){
            freq[x.second].push_back(x.first);
        }

        vector<int>res;
        for(int i = n; i>0; i--){
            for(auto &a:freq[i]){
                res.push_back(a);
                if(res.size()==k){
                    return res;

                }
            }


        }

        
   return res; }
};
