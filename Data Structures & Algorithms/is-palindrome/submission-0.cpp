class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(auto t: s){
            if(isalnum(t)){
                x +=tolower(t);
            }

        }
        string z = x;
        
        reverse(z.begin(),z.end());
        return x==z;
    }
};
