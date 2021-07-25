class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st;
        
        for(int i =0; i<s.length(); i++){
            if(s[i] != '#'){
                st.push(s[i]);
            }
            else if(s[i] == '#'){
                if(st.size()>0) st.pop();
            }
        }
        

        
        
        stack<char> st2;
        
        for(int i =0; i<t.length(); i++){
            if(t[i] != '#'){
                st2.push(t[i]);
            }
            else if(t[i] == '#'){
                if(st2.size()>0) st2.pop();
            }
        }
        
        if(st.size() != st2.size()){
            return false;
        }
        char temp1,temp2;
     
       
        
        while(!st.empty() && !st2.empty()){
            if(st.top()!= st2.top()) return false;
            st.pop();
            st2.pop();
        }
        return true;
        
        
    }
};