class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int maxSize = 0;
        int i = 0;
        int j = 0;
        
        while(j<nums.size()){
            
            if(nums[j] == 0){
                k--;
            }
            
            if(k < 0){
                while(k!=0){
                    
                    if(nums[i] == 0){
                        k++;
                    }
                    i++;
                }
            }
            
            if(j-i+1 > maxSize){
                maxSize = j-i+1;
                cout<<maxSize;
            }
            
            j++;
            
        }
        
        return maxSize;
        
    }
};