class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0;
        int time = 0;
        
        for(int i = 0; i<row; i++){
            for(int j =0; j<col; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                if(grid[i][j] == 1) fresh++;
            }
        }
        
        while(!q.empty()){
            int qsize = q.size();
            cout<<"hello";
            for(int i = 0; i<qsize; i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                if(x>0 && grid[x-1][y] == 1){
                    grid[x-1][y] = 2;
                    q.push({x-1,y});
                    fresh--;
                }
                
                if(y>0 && grid[x][y-1] == 1){
                    grid[x][y-1] = 2;
                    q.push({x,y-1});
                    fresh--;
                }
                
                if(x<row-1 && grid[x+1][y] == 1){
                    grid[x+1][y] = 2;
                    q.push({x+1,y});
                    fresh--;
                }
                
                if(y<col-1 && grid[x][y+1] == 1){
                    grid[x][y+1] = 2;
                    q.push({x,y+1});
                    fresh--;
                }
            }
            if(!q.empty()) time++;
        }
        
        if(fresh == 0){
            return time;
        }
        return -1;
        
    }
};