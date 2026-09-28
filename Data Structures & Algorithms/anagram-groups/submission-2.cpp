class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      int x = strs.size();  
      unordered_map<string,vector<string>>mp;
      for(auto &z:strs){
        string st =z;
        sort(st.begin(), st.end());
        mp[st].push_back(z);

      }
        vector<vector<string>>res;
        for(auto &c:mp){
            res.push_back(c.second);

        }




        
  return res;  }
};
