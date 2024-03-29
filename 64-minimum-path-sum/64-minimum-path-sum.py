class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        
        dp = [[0] * col for i in range(row)]
        print(dp)
        
        for i in range(row):
            for j in range(col):
                print(i,j)
                if i == 0 and j == 0:
                    dp[i][j] = grid[i][j]
                elif i == 0 and j!=0:
                    dp[i][j] = dp[i][j-1] + grid[i][j]
                elif i!=0 and j ==0:
                    dp[i][j] = dp[i-1][j] + grid[i][j]
                else:
                    dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j]
                    
        
        return dp[row-1][col-1]