class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count  = 1;
        int result = nums[0];
        
        for(int i =1; i<nums.size(); i++){
            
            if(nums[i] == result){
                count++;
            }
            
            else if(nums[i] != result){
                count--;
            }
            
            if(count == 0){
                result = nums[i];
                count = 1;
            }
        }
        int count2=  0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == result){
                count2++;
            }
        }
        
        if(count2>nums.size()/2) return result;
        return result;
        
        
    }
};