class Solution {
public:
    int maxm = 0;
    void dfs(vector<vector<int>> &grid, int i, int j){
        cout<<"hello";
        int row = grid.size();
        int col = grid[0].size();
        maxm++;
        cout<<maxm<<i<<j<<" ";
        grid[i][j] = '0';
        
        if(i>0 && grid[i-1][j] == 1) dfs(grid,i-1,j);
        if(j>0 && grid[i][j-1] == 1) dfs(grid,i,j-1);
        if(i<row-1 && grid[i+1][j] == 1) dfs(grid,i+1,j);
        if(j<col-1 && grid[i][j+1] == 1) dfs(grid,i,j+1);
        
        return;
    }
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
       int totalmax = 0;
        for(int i =0; i<row; i++){
            for(int j= 0; j<col; j++){
                if(grid[i][j] == 1){
                   
                    maxm = 0;
                    dfs(grid, i, j);
                    totalmax = max(totalmax, maxm);
                }
            }
        }
        return totalmax;
    }
};