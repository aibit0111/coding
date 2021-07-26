class Solution {
public:
    
    int binarysearch(vector<int> &nums, int i, int j, int target){
        
        
        
        
        
        while(i<=j){
            int mid = (j-i)/2 + i;
            if(nums[mid] == target){
            return mid;
        }
            
            else if(nums[mid]>target){
                j = mid-1;
            }
            else{
                i = mid + 1;
            }
            
        }
        
        return -1;
        
    }
    
    
    int search(vector<int>& nums, int target) {
        
        int i =0; 
        int j = nums.size()-1;
        int minindex;
        int startindex;
        int endindex;
        
        if(nums[0] == target) return 0;
        if(nums[nums.size()-1] == target) return nums.size()-1;
        
        if(nums[0] < nums[nums.size()-1]){
            return (binarysearch(nums, 0, nums.size()-1, target));
        }
        
        cout<<i<<j<<" ";
        
        if(nums.size() == 1){
            if(nums[0] == target) return 0;
            else return -1;
        }
        
        if(nums.size() == 2){
            if(nums[0] == target) return 0;
            if(nums[1] == target) return 1;
            else return -1;
        }
    
        
        while(i<=j){
            int mid = (j-i)/2 + i;
            cout<< mid;
        
                if(mid != nums.size()-1 && mid!=0 && nums[mid] <nums[mid+1]  && nums[mid-1] > nums[mid]){
                startindex = mid;
                break;  
                }
            
                else if(mid == 0 && nums[mid] <nums[mid+1] ){
                     startindex = mid;
                    break;
                }
                
            else if(mid == nums.size()-1 && nums[mid-1] > nums[mid]){
                 startindex = mid;
                    break;
            }
            
            
            else if(nums[mid] >= nums[0]){
                i = mid+1;
            }
            else if(nums[mid] < nums[0]){
                j = mid-1;
            }
        }
        
        cout<<startindex;
        
        int temp1 = binarysearch(nums, 0, startindex-1, target);
        int temp2 = binarysearch(nums, startindex, nums.size()-1, target);
        if(temp1 == -1 && temp2 == -1) return -1;
        
        if(temp1 != -1) return temp1;
        return temp2;
        
        
        
        
    
        
        
    }
};