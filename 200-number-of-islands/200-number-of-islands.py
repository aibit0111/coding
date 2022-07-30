def helperdfs(x, y, grid):
    grid[x][y] = '0'
    row = len(grid)
    col = len(grid[0])
        
    if x>0 and grid[x-1][y] == '1':
        helperdfs(x-1,y,grid)
        
    if x<row-1 and grid[x+1][y] == '1':
        helperdfs(x+1, y, grid)
            
    if y>0 and grid[x][y-1] == '1':
        helperdfs(x,y-1,grid)
            
    if y<col-1 and grid[x][y+1] == '1':
        helperdfs(x,y+1,grid)
            
    return 




class Solution:
    
    def helperdfs(x, y, grid):
        grid[x][y] = '0'
        row = len(grid)
        col = len(grid[0])
        
        if x>0 and grid[x-1][y] == '1':
            helperdfs(x-1,y,grid)
        
        if x<row-1 and grid[x+1][y] == '1':
            helperdfs(x+1, y, grid)
            
        if y>0 and grid[x][y-1] == '1':
            helperdfs(x,y-1,grid)
            
        if y<col-1 and grid[x][y+1] == '1':
            helperdfs(x,y+1,grid)
            
        return 
        
    
    def numIslands(self, grid: List[List[str]]) -> int:
        count = 0 
        row = len(grid)
        col = len(grid[0])
        #print(row,col)
        for x in range(len(grid)):
            for y in range(len(grid[0])):
                print(x,y)
                if grid[x][y] == '1':
                    print("yes")
                    count = count + 1
                    helperdfs(x,y,grid)
                    
        return count
        