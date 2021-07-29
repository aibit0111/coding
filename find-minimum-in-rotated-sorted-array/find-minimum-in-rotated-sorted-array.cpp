class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int i =0;
        int j = nums.size()-1;
        
        if(nums.size() == 1) return nums[0];
        if(nums[0]<nums[nums.size()-1]){
            return nums[0];    
        }
        int mid;
        
        while(i<=j){
                                               
            mid = (j-i)/2 + i;
            
            cout<<i<<j<<mid<<" ";
            
            
            if(mid == nums.size()-1 && nums[mid] > nums[mid-1]){
                return nums[mid];
            }
            
            else if(nums[mid] >= nums[0]){
                
               
                i = mid +1;
                
            }
            
            else if(mid!= nums.size()-1 && nums[mid-1]>nums[mid] && nums[mid+1] > nums[mid]){
                
                return nums[mid];
                
            }
            
            else if(nums[mid] < nums[0]){
                j = mid-1;
            }
            
        }
        
        return nums[mid];
        
    }
};