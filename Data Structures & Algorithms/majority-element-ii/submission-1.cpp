class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>c;
        for(auto &x: nums){
        c[x]++;
        
    }

    vector<int>s;
    for(auto &a: c){
        if(a.second>n/3){
            s.push_back(a.first);
        }
    }
return s;

    }
};

