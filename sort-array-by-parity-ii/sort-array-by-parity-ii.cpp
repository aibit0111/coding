class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> result(nums.size());
        int evenIndex = 0;
        int oddIndex = 1;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] %2 ==0){
                result[evenIndex] = nums[i];
                evenIndex = evenIndex + 2;
            }
            else{
                result[oddIndex] = nums[i];
                oddIndex = oddIndex + 2;
            }
            
        }
        
        return result;
    }
};