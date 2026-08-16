class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    map<string,vector<string>>mithulrandKunalkutiya;
    for(auto word : strs){
        auto x = word;
        sort(x.begin(),x.end());
        mithulrandKunalkutiya[x].push_back(word);

    }
    vector<vector<string>>ans;
    for(auto z : mithulrandKunalkutiya ){
        ans.push_back(z.second);
    }

   return ans; }
};
