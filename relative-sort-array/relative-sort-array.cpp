class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
       map<int,int> mp;
        vector<int> result;
        
        for(int i = 0; i<arr1.size(); i++){
            mp[arr1[i]]++;
        }
        int element;
        int count;
        for(int i = 0; i<arr2.size(); i++){
            element = arr2[i];
            auto it = mp.find(element);
            if(it != mp.end() && it->second>0){
                count = it->second;
                while(count){
                    result.push_back(element);
                    count--;
                    it->second-- ;
                }
            }
        }
        
        for(auto i : mp){
            element = i.first;
            count = i.second;
            if(count>0){
                while(count){
                    result.push_back(element);
                    count--;
                    i.second--;
                }
            }
        }
        
        return result;
        
    }
};