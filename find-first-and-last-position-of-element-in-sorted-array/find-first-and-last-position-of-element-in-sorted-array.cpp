class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        if(nums.size() == 0) {
            result.push_back(-1);
            result.push_back(-1);
            return result;

        }
        if(nums.size()==1){
            if(nums[0] == target){
                result.push_back(0);
                result.push_back(0);
                return result;
            }
            else {
                result.push_back(-1);
                result.push_back(-1);
                return result;
            }
        }
        int i = 0;
        int j = nums.size()-1;
        int mid;
        int firstcandidate = -1;
        int lastcandidate = -1;
        
        while(i<=j){
            mid = (j-i)/2 + i;
            
            if(nums[mid] == target){
                firstcandidate = mid;
                j = mid -1;
            }
            else if( nums[mid] > target){
                j = mid-1;
            }
            else if(nums[mid] < target){
                i = mid +1;
            }
        }
        
        i = 0;
        j = nums.size()-1;
        
        while(i<=j){
             mid = (j-i)/2 + i;
            if(nums[mid] == target){
                lastcandidate = mid;
                i = mid+1;
            }
            else if( nums[mid] > target){
                j = mid-1;
            }
            else if(nums[mid] < target){
                i = mid +1;
            }
        }
        
        result.push_back(firstcandidate);
        result.push_back(lastcandidate);
        return result;
        
    }
};