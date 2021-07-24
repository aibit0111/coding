class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> umap;
        
        for(int i =0; i<s.length(); i++){
            umap[s[i]]++;
        }
        
        for(int i =0; i<s.length(); i++){
            auto it = umap.find(s[i]);
            if(it != umap.end()){
                if(it->second==1){
                    return i;
                }
            }
        }
        return -1;
    }
};