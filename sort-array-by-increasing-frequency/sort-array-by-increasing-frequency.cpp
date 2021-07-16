class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        
        for(auto i : nums){
            umap[i]++;
        }
        
        sort(nums.begin(), nums.end() , [&] (int a, int b) {
           
            return umap[a] != umap[b] ? umap[a] < umap[b] : a>b ; });
        
        return nums;
    }
};