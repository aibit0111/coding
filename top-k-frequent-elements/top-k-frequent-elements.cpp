class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> umap;
        vector<int> result;
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> minh;
        
        for(int i =0; i<nums.size(); i++){
            umap[nums[i]]++;
        }
        int count;
        int value;
        for(auto i = umap.begin(); i!= umap.end(); i++){
            count = i->second;
            value = i->first;
            cout<<count<<" "<<value;
            cout<<" *** ";
            minh.push({count,value});
            
            if(minh.size() > k){
                minh.pop();
            }
        }
        
        while(minh.size()!=0){
            result.push_back(minh.top().second);
            minh.pop();
        }
        
        return result;
        
        
        
    }
};