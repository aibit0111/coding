class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int i = 1;
        int j = num/2;
        long long mid;
        long long guess;
        while(i<=j){
            mid = (j-i)/2 + i;
            guess = mid * mid;
            if(guess == num) return true;
            else if(guess > num){
                j = mid-1;
            }
            else {
                i = mid+ 1;
            }
            
        }
        
        return false;
        
    }
};