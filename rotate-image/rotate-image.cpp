class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        int temp;
        
        for(int i =0; i<row; i++){
            for(int j =0; j<=i; j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for(int i =0; i<col/2; i++){
            for(int j =0; j<row; j++){
                temp = matrix[j][i];
                matrix[j][i] = matrix[j][col-1-i];
                matrix[j][col-1-i] = temp; 
            }
        }
        
        
    }
};