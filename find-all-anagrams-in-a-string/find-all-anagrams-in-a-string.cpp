class Solution {
public:
    
    int helper(unordered_map<char, int> umap){
        int count  = 0;
        for(auto i : umap){
            if(i.second != 0) {
                return 0;
            }
        }
      return 1;
    }
    
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> result;
        
        if(s.length() < p.length()) return result;
        
        unordered_map<char, int> umap;
        int length2 = p.length();
        for (int i = 0; i<p.size(); i++){
            umap[p[i]]++;
        }
        
        int i = 0;
        int j = 0;
        char c;
        for(int k = j; k<length2; k++){
            c = s[k];
            auto it = umap.find(c);
            if(it != umap.end()){
                (it->second)--;
            }
        }
        
        int check;
        check = helper(umap);
        if(check == 1){
            result.push_back(i);
        }
        char c1;
        char c2;
        j = length2-1;
        while(j!=s.length()-1){
            cout<<i<<" "<<j;
            c1 = s[i];
            auto it = umap.find(c1);
            if(it!= umap.end()){
                umap[c1]++;
            }
            i++;
            j++;
            c2 = s[j];
            auto itt = umap.find(c2);
            if(itt!= umap.end()){
                (itt->second)--;
            }

            check = helper(umap);
            cout<<check;
            if(check == 1){
                result.push_back(i);
            }
        
        }
        
        return result;
        
    }
};