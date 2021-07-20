class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxh;
        
        for(int i = 0; i<nums.size() ;i++){
            maxh.push(nums[i]);
        }
        int temp;
        while(k!=0) {
            temp = maxh.top();
            maxh.pop();
            k--;
        }
        
        return temp;
    }
};