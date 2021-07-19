class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        if(row == 1 && col == 1) return mat[0][0];
        int sum = 0;

        
        for(int i =0; i<row; i++){
            sum = sum + mat[i][i] + mat[i][col-i-1];
        }
        
        if(row%2 == 0){
            return sum;
        }
        
        sum = sum - mat[(row-1)/2][(col-1)/2];
        return sum;
        
    }
};