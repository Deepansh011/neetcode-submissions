class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0){
            return "";
        }
        sort(strs.begin(),strs.end());
        string ans;
        string A =strs[0]; 
        string B =strs[n-1];
        for(int i = 0; i<A.size(); i++){
            if(A[i]==B[i]){
                ans.push_back(A[i]);
            
            }else break;
        }

        
     return ans;}
};