class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum = 0;
        int maxsum = INT_MIN;
        
        for(int i =0; i<nums.size(); i++){
            currentsum = currentsum + nums[i];
            if(currentsum > maxsum){
                maxsum = currentsum;
            }
            
            if(currentsum < 0){
                currentsum = 0;
            }
            
        }
        
        return maxsum;
    }
};