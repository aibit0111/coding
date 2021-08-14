class Solution {
public:
    
    void dfs (int i, int j, vector<vector<char>> &board){
        int row = board.size();
        int col = board[0].size();
        board[i][j] = '1';
        
        if(i>0 && board[i-1][j] == 'O') dfs(i-1,j, board);
        if(j>0 && board[i][j-1] == 'O') dfs(i, j-1, board);
        if(i<row-1 && board[i+1][j] == 'O') dfs(i+1 ,j , board);
        if(j<col-1 && board[i][j+1] == 'O') dfs(i, j+1, board);
        return;
    }
    
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        
        for(int i =0; i<row; i++){
            for(int j =0 ;j<col; j++){
                
                if( (i ==0 || i == row-1 || j ==0 || j == col-1)  && (board[i][j] == 'O')){
                    cout<<i<<j<<endl;
                    dfs(i,j,board);
                }
            }
        }
        
        //cout<<board[3][1];
        
        for(int i =0; i<row; i++){
            for(int j =0; j<col; j++){
                if(board[i][j] == '1'){
                    cout<<i<<j<<"h";
                    board[i][j] = 'O';
                }
                else if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    
        
    }
};