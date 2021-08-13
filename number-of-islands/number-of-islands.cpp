class Solution {
public:
    
    void bfs(vector<vector<char>> &grid, int i, int j){
        //cout<<"hello";
        cout<<i<<j<<" ";
        int row = grid.size();
        int col = grid[0].size();
        grid[i][j] = '0';
        if(i>0 && grid[i-1][j] == '1') bfs(grid, i-1, j);
        if(j>0 && grid[i][j-1] == '1') bfs(grid, i, j-1);
        if(i<row-1 && grid[i+1][j] == '1') bfs(grid, i+1, j);
        if(j<col-1 && grid[i][j+1] == '1') bfs(grid, i, j+1);
        return;       
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        for(int i =0; i< row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == '1'){
                bfs(grid, i , j);
                count++;
                }
            }
        }
        
        return count;
        
    }
};