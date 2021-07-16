class Solution {
public:
    
    int helper(unordered_map<char, int> umap){
        for(auto i : umap){
            if(i.second > 0) return 0;
        }
        return 1;
    }
    
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        
        unordered_map<char, int> umap;
        
        for(int i = 0; i<s1.length(); i++){
            umap[s1[i]]++;
        }
        
        int length2 = s1.length();
        
        int i = 0;
        int j = 0;
        char c,c2;
        int result;
        while(j<length2){
            cout<<i<<j<<" ";
            c = s2[j];
            auto it = umap.find(c);
            if(it != umap.end()){
                it->second--;  // remember in find() we use -> not .(dot) 
            }
            j++;
        }
        result = helper(umap);
        if(result == 1) return true;
        j = length2-1;
        while(j<s2.length()){
            cout<<i<<j<<" ";
            c = s2[i];
            auto it = umap.find(c);
            if(it != umap.end()){
                it->second++;
            }
            i++;
            j++;
            c2 = s2[j];
            auto it2 = umap.find(c2);
            if(it2 != umap.end()){
                it2->second--; 
            }
            result = helper(umap);
            cout<<"result is " << result <<" ";
            if(result == 1) return true;   
        }
        
        return false;
        
        
    }
};