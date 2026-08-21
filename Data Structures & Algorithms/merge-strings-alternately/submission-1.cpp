class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word2.size();
        int n = word1.size();
        int z = max(m,n);
       string ans;
        for(int i = 0 ; i<z; i++){
           if(i<n){
            ans+= word1[i];
           }
         if(i<m){
            ans+= word2[i];
           }
        }
        
        
    return ans;}
};