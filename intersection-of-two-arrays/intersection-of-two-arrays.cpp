class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> uset1;
        unordered_set<int> uset2;
        
        for(int i =0; i<nums1.size(); i++){
            uset1.insert(nums1[i]);
        }
        
        for(int i =0; i<nums2.size(); i++){
            uset2.insert(nums2[i]);
        }
        
        
        for(auto i: uset1){
            for(auto j : uset2){
                if(i == j){
                    result.push_back(i);
                }
            }
        }
        
        return result;
        
    }
};