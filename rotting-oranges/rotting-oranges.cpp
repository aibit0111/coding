class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh=0;
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int, int>> q;
        
        for(int i =0; i<grid.size(); i++){
            for(int j =0; j <col; j++){
                if( grid[i][j] == 2){
                    q.push({i,j});
                }
                
                if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        int qsize ;
        int time = 0;
        int x,y;
        while(!q.empty()){
            qsize = q.size();
            for(int i =0; i<qsize; i++){
                x = q.front().first;
                y = q.front().second;
                q.pop();
                if(x>0 && grid[x-1][y] == 1) {
                    grid[x-1][y] = 2;
                    q.push({x-1,y});
                    fresh--;    
                }
                if(x<row-1 && grid[x+1][y] == 1) {
                    grid[x+1][y] = 2;
                    q.push({x+1, y});
                    fresh--;
                }
                if(y>0 && grid[x][y-1] == 1) {
                    grid[x][y-1] = 2;
                    q.push({x , y-1});
                    fresh--;
                }
                if(y<col-1 && grid[x][y+1] == 1) {
                    grid[x][y+1] =2;
                    q.push({x , y+1});
                    fresh--;
                }
            
            }
            if(q.empty() == false) time++;
            
        }
        
        if(fresh > 0) return -1;
        return time;
        
        
    }
};