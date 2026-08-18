class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        string code;
        for(auto &x :strs){
            code.append(to_string(x.size()));
            code.append("#");
            code.append(x);
        }
        return code;


    }

    vector<string> decode(string s) {
        vector<string> code;
        int n = s.size();
        int i = 0;

        while( i < n){
            int j = i;
            while( s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            i = j+1;
            j = i+length;
            code.push_back(s.substr(i, length));

            i=j;
            
        } return code;

    }
};
