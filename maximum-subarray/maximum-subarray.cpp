class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = INT_MIN;
        int currsum;
        for(int i =0; i<nums.size(); i++){
            currsum = 0;
            for(int j= i; j<nums.size(); j++){
                currsum = currsum + nums[j];
                sum = max(sum, currsum);
            }
        }
        return sum;
    }
};