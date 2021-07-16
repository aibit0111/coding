class Solution {
public:
    string customSortString(string order, string str) {
        unordered_map<char, int> umap;
        string s = "";
        for(int i = 0; i<str.length() ;i++){
            umap[str[i]]++;
        }
        char c;
        int count;
        for(int i = 0; i<order.length(); i++){
            c = order[i];
            cout<<c;
            auto it = umap.find(c);
            if(it != umap.end()){
                int count = it->second;
                string temp(count, it->first);
                s = s+ temp;
                umap.erase(it->first);
            }
           
        }
        
        for(auto i : umap){
            string temp(i.second, i.first);
                s = s + temp;
            
        }
        
       return s; 
    }
};