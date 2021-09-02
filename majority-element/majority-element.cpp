class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count  = 1;
        int result = 0;
        
        for(int i =1; i<nums.size(); i++){
            
            if(nums[i] == nums[result]){
                count++;
            }
            else if(nums[i] != nums[result]){
                count--;
            }
            if(count ==0){
                count = 1;
                result =i;
            }
        }
        count  =0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == nums[result]){
                count++;
            }
        }
       return nums[result];
        
        
    }
};