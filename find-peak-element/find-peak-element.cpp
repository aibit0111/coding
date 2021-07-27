class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==1) return 0;
        int i =0;
        int j = nums.size()-1;
        int mid;
        
        while(i<=j){
            mid = (j-i)/2 + i;
            cout<<mid;
        
            if(mid!=0 && mid!=(nums.size()-1) && nums[mid]>nums[mid-1] && nums[mid] > nums[mid+1]){
               
                return mid;
            }
            
            else if(mid == 0 && nums[mid+1]<nums[mid]){
                 
                return mid;
            }
            
            else if(mid == nums.size()-1 && nums[mid]> nums[mid-1]){
                cout<<"h";
                return mid;
            }
            
            else if(mid!=0 && mid!=(nums.size()-1) && nums[mid+1] > nums[mid] && nums[mid] > nums[mid-1]){
                i = mid + 1;
            }
            else if(mid!=0 && mid!=(nums.size()-1) && nums[mid+1] < nums[mid] && nums[mid] < nums[mid-1]){
                j = mid-1;
            }
            
            else if(mid == 0 && nums[mid+1]>nums[mid]){
                i = mid+1;
            }
            else if(mid == nums.size()-1 && nums[mid]<nums[mid-1]){
                j = mid-1;
            }
            else if(mid!=0 && mid!=(nums.size()-1) && nums[mid+1] > nums[mid] && nums[mid] < nums[mid-1]){
                if(nums[mid-1] > nums[mid+1]){
                    j = mid-1;
                }
                else {
                    i = mid+1;
                }
            }
            
        }
        return -1;
    }
};