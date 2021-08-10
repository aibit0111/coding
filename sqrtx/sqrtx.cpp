class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0 || x == 1) return x;
        if(x == 2) return 1;
        long result;
        for(long long i =1; i<=x/2; i++){
            
            if(i * i <= x){
                result = i;
            }
            
            else if(i*i >x) break;
        }
        
        return result;
        
    }
};