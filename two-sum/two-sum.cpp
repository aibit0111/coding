class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        unordered_map<int,int> umap;
        
        for(int i = 0; i<nums.size(); i++){
            umap[nums[i]] = i;
        }
        int complement;
        for(int i = 0; i<nums.size(); i++){
            complement = target-nums[i];
            auto it = umap.find(complement);
            if(it != umap.end() && it->second != i){
                output.push_back(i);
                output.push_back(it->second);
                break;
            }
        }
        return output;
        
    }
};