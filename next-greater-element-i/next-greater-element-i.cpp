class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> umap;
        
        stack<int> s;
        
        for(int i =nums2.size()-1; i>=0; i--){
            int element = nums2[i];
            if(s.empty() == true) umap[element] = -1;
            
            else if(s.empty() == false && s.top()>element){
                umap[element] = s.top();
            }
            else if(s.empty() == false && s.top()<element){
                
                while(s.empty() == false && s.top()<element){
                    s.pop();
                }
                if(s.empty() == true){
                    umap[element] = -1;
                }
                else{
                    umap[element] = s.top();
                }
                
            }
            s.push(nums2[i]);
        }
        
        for(int i =0; i<nums1.size(); i++){
            int element = nums1[i];
            
            auto it = umap.find(element);
            
            if(it != umap.end()){
                result.push_back(it->second);
            }
        }
        
        return result;
        
        
    }
};