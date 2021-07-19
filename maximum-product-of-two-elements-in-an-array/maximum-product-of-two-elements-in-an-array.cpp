class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstmax = INT_MIN;
        int secondmax = INT_MIN;
        int temp;
        for(auto i : nums){
            if(i >= firstmax){
                temp = firstmax;
                firstmax = i;
                secondmax = temp;
            }
            if(i > secondmax && i < firstmax){
                secondmax = i;
            }
        }
        
        return (firstmax-1) * (secondmax-1);
    }
};