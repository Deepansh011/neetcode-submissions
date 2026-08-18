class Solution {
public:

    string encode(vector<string>& strs) {
        string x; 
        for(auto &y: strs){
        x.append(to_string(y.size()));
        x.push_back('#');
        x.append(y);

        }
        return x;

    }

    vector<string> decode(string s) {
        vector<string>l;
        int n = s.size();
        int i = 0;
        while(i<n){
            int j = i;
            while(s[j]!='#'){
                j++;}
                int len = stoi(s.substr(i, j-i));
               i = j+1;
               j = i+len;
                l.push_back(s.substr(i,len));
                i=j;
          

        } return l;

    }
};
