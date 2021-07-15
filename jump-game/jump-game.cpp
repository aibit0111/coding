class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int dp[size];
        for(int i = 0; i<size; i++){
            dp[i] = 0;
        }
        dp[size-1] = 1;
        for(int j = nums.size()-2; j>=0; j--){
            
            for(int k = 1; k<=nums[j] ; k++){
                
                if(dp[j + k] == 1){
                    dp[j] = 1;
                    break;
                }   
            }
        }
        
        return dp[0];
        
        
    }
};