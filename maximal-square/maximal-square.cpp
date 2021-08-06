class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int dp[row+1][col+1];
        int maxsize = 0;
        
        for(int i =0; i<=row; i++){
            dp[i][0] = 0;
        }
        
        for(int i =0; i<=col ; i++){
            dp[0][i] = 0;
        }
        
        for(int i =1; i<=row; i++){
            for(int j= 1; j<=col; j++){
                if (matrix[i-1][j-1] == '0'){
                    cout<<"h"<<endl;
                    dp[i][j] = 0;
                }
                else{
                    dp[i][j] =  min (min(dp[i-1][j],dp[i][j-1]), dp[i-1][j-1]) + 1;
                    cout<<i<<j<<" "<<dp[i][j]<<endl;
                    maxsize = max(maxsize, dp[i][j]); 
                }
            }
        }
        
        return maxsize*maxsize;
        
    }
};