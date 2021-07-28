class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if(k==0){
            unordered_map<int,int> umap;
            int count =0;
       for(int i =0; i<nums.size(); i++){
                umap[nums[i]]++;
            }
            
            for(auto i = umap.begin(); i!=umap.end(); i++){
                if(i->second >=2 ) count++;
            }
            
            
            return count;
        }
        
        unordered_set<int> uset;
        
        for(int i =0; i<nums.size(); i++){
            uset.insert(nums[i]);
        }
        int count = 0;
        for(int i =0; i<nums.size(); i++){
            int element = nums[i];
            int e1 = element - k;
            int e2 = element + k;
            
            if(uset.find(element) != uset.end()){
                auto it = uset.find(e1);
                 if(it != uset.end() && *it != element){
                     count++;
                 }
                auto it2 = uset.find(e2);
                 if(it2 != uset.end() && *it2!=element){
                     count++;
                 }
                uset.erase(element);
            }
        }
        
        return count;
    }
};