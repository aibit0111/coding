class Solution {
public:
    
    int helper(int array[26]){    
        for(int i =0; i<26; i++){
            if(array[i] != 0){
                return 0;
            }
        }
        return 1;
    }
    
    
    vector<int> findAnagrams(string s, string p) {
        
        int length2 = p.length();
        int array[26] = {0};
        int idx;
        vector<int> result;
        
        if(p.length()>s.length()) return result;
        
        for(int i= 0; i<p.length(); i++){
            idx = p[i] - 'a';
            array[idx]++;    
        }
        
        for(int i =0; i<length2; i++){
            idx = s[i] - 'a';
            array[idx]--;
        }
        
        if(helper(array)) result.push_back(0);
        
        int left = 0;
        int right = length2-1;
        int pidx;
        int nidx;
        
        while(right<s.length()){
            cout<<left<<right;
            pidx = s[left] - 'a';
            array[pidx]++;
            left++;
            right++;
            if(right<s.length()) nidx = s[right] - 'a';
            cout<<"n"<<left<<" ";
            array[nidx]--;
            if(helper(array) && right <s.length()) result.push_back(left);
        }
        
        return result;
    }
};