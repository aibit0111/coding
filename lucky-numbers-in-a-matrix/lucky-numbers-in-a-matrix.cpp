class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;
        
        vector<int> row_array(row);
        vector<int> col_array(col);
        int temp_min;
        for(int i = 0; i <row ; i++){
            temp_min = INT_MAX;
            for(int j = 0; j<col; j++){
                if(temp_min>matrix[i][j]){
                    temp_min = matrix[i][j];
                }
                row_array[i] = temp_min;
                cout<<row_array[i];
            }
        }
        int temp_max;
        for(int i = 0; i<col ;i++){
            temp_max = INT_MIN;
            for(int j =0 ; j<row; j++){
                if(temp_max < matrix[j][i]){
                    temp_max = matrix[j][i];
                }
                col_array[i] = temp_max;
                cout<<col_array[i];
            }
        }
        
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(matrix[i][j]  == row_array[i] && matrix[i][j] == col_array[j]){
                    result.push_back(matrix[i][j]);
                }
            }
        }
        
        return result;
        
    }
};