class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> umap;
        string temp;
        
        for(auto i : strs){
            temp = i;
            sort(temp.begin(), temp.end());
            umap[temp].push_back(i);
        }
        
        for(auto i : umap){
            result.push_back(i.second);
        }
        
        return result;
        
    }
};