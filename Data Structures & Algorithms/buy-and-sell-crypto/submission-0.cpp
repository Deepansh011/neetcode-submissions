class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mp = 0;
        int low = p[0];

        for(int i = 1; i < p.size(); i++) {
           low = min(low, p[i]);
           mp = max(p[i]-low,mp);
        }

        return mp;
    }
};