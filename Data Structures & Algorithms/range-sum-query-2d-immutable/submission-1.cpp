class NumMatrix {
    vector<vector<int>> s;  
public:
    NumMatrix(vector<vector<int>>& m) {
        int row = m.size();
        int col = m[0].size();
        s = vector<vector<int>>(row +1, vector<int>(col+1 ,0));
        
        for(int i = 1; i<=row; i++){
            for(int j = 1; j<=col; j++){
            
                s[i][j]  = s[i-1][j]+s[i][j-1]-s[i-1][j-1]+m[i-1][j-1];


            }

         }
    

    }
    int sumRegion(int r1, int c1, int r2, int c2) {
        int sum = s[r2 + 1][c2+1]-s[r1][c2+1]-s[r2+1][c1]+s[r1][c1];
        return sum;

        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */