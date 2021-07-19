class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int row_flag = 0;
        int col_flag = 0;
        
        for(int i = 0; i<col; i++){
            if(matrix[0][i] == 0) {
                row_flag = 1;
                break;
            }
        }
        
        for(int i = 0; i<row; i++){
            if(matrix[i][0] == 0){
                col_flag = 1;
                break;
            }
        }
        
        cout<<row_flag;
        cout<<col_flag;
        
        if(row == 1 && col != 1){
            
            
        }
        
        for(int i = 1; i<row; i++){
            for(int j = 1; j<col; j++){
                if(matrix[i][j] == 0){
                    cout<<"h";
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
          for(int i = 1; i<row; i++){
            for(int j =1; j<col; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }   
        
        
        if(row_flag == 1){
            for(int i = 0; i<col; i++){
                matrix[0][i] = 0;
            }
        }
        
        if(col_flag == 1){
            for(int i =0; i<row; i++){
                matrix[i][0] = 0;
            }
        }
        
    }
};