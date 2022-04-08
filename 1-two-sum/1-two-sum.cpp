class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> umap;
        
        for(int i = 0; i<nums.size(); i++){
            umap[nums[i]] = i;
        }
        vector<int> result;
        
        for(int i =0; i<nums.size(); i++){
            result.clear();
            cout<<i;
            result.push_back(i);
            int complement = target - nums[i];
            cout<<complement;
            auto it = umap.find(complement);
            if(it != umap.end() && it->second != i){
                cout<<"yes";
                result.push_back(it->second);
                return result;
            }
        }
        return result;
        
        
        
    }
};