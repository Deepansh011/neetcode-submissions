class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            // un ordered map bannama

            unordered_map<int,int>x;
            for(int y :nums){
                x[y]++;
            }

        
        vector<pair<int,int>>cop;
        for(const auto &y: x){
            cop.push_back({y.second, y.first});
        }
        sort(cop.rbegin(), cop.rend());
        vector<int> l;
        for(int i = 0; i<k; i++){
            l.push_back(cop[i].second);
        }
   return l;
   }
};
