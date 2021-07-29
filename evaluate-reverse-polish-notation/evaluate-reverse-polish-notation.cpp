class Solution {
public:
 
    
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        char e1,e2;
        int a, b,result;
        for(int i =0; i<tokens.size(); i++){    
            
            if(tokens[i] == "+"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                result = a + b;
                s.push(result);
            }
            
            else if(tokens[i] == "*"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                result = a * b;
                s.push(result); 
            }
            else if(tokens[i] == "/"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                cout<<a<<b;
                result = b / a;
                cout<<result;
                s.push(result); 
            }
            else if(tokens[i] == "-"){
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                result = b - a;
                s.push(result); 
            }
            
            else{
                s.push(stoi(tokens[i]));
            }
            
        }
        
        return s.top();
        
    }
};