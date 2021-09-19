class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i =0; i<s.length(); i++){
            char element = s[i];
            
            if(st.empty() == true && (element=='}' || element == ']' || element == ')')){
                return false;
            }
            
            else if(element == '(' || element == '{' || element == '['){
                st.push(element);
            }
            
            else if(element == '}' && st.top() == '{') st.pop();
            else if(element == ')' && st.top() == '(') st.pop();
            else if(element == ']' && st.top() == '[') st.pop();
            
            else{
                return false;
            }
            
        }
        
        if(st.empty() == true) return true;
        
        return false;
        
        
    }
};