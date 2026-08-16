class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>x;
        for(auto i :strs){
            auto s = i;
            sort(s.begin(),s.end());
            x[s].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto s : x){
            ans.push_back(s.second);
        }
      return ans;  
    }
};
