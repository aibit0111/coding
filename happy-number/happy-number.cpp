class Solution {
public:
    
    int digitsum(int n){
        int sum = 0;
        
        while(n!=0){
             int num = n%10;
             n = n/10;
            sum = sum +  num*num;   
        }
        
        return sum;     
    }
    
    
    bool isHappy(int n) {
        
        unordered_set<int> uset;
        
        while(true){
            uset.insert(n);
            n = digitsum(n);
            
            if(n == 1) return true;
            auto it = uset.find(n);
            if(it != uset.end()){
                return false;
            }
            
        }
        
    }
};