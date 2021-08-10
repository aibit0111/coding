class Solution {
public:
    bool isValid(string s) {
        char element;
        stack<char> st;
        st.push(-1);
        for(int i =0; i<s.length(); i++){
            element = s[i];
            
            if(element == '{' || element== '(' || element == '['){
                st.push(element);
            }
            
            else if(element == '}' && st.top() == '{'){
                st.pop();
            }
            
            else if(element == ')' && st.top() == '('){
                st.pop();
            }
            else if(element == ']' && st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
        
        if(st.size()==1) return true;
        return false;
        
        
    }
};