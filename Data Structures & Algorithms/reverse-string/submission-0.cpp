class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = s.size()-1;
        int j = 0;

        while(l>j){
            swap(s[j++],s[l--]);
        }
    }
};