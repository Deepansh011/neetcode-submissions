class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string result;
        string rev;
        for(char x : s){
            if(isalnum(x)){
                result += tolower(x);
                
            }
        }

        rev = result;
        reverse(rev.begin(),rev.end());
        if(rev==result){return true;}
        else return false;







    }
};
