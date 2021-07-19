class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int row = box.size();
        int col = box[0].size();
        vector<vector<char>> output;
        
       
        
        for(int i = 0; i<row; i++){
            int count = 0 ;
            for(int j = col-1; j>=0 ; j--){
                if(box[i][j] == '.'){
                    count++;
                }    
                if(box[i][j] == '*'){
                    count = 0 ;
                }
                if(box[i][j] == '#'){
                    box[i][j] = '.';
                    box[i][j+count] = '#'; 
                }
                
            }
        }
        
        vector<char> temp;
        for(int i = 0; i< col ; i++){
            temp.clear();
            for(int j = row-1; j>=0; j--){
                temp.push_back(box[j][i]);
            }
            output.push_back(temp);
        }
        
        
        
    return output;
        
    }
};