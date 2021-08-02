class Solution {
public:
    int numTrees(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        int sum = 0;
        int side1, side2, temp;
        for(int i =3; i <=n; i++){
            sum = 0;
            for(int j=0; j<i; j++){
                side1 = j;
                side2 = i-j-1;
                temp = dp[side1] * dp[side2];
                cout<<temp<<" ";
                sum = sum + temp;
            }
            dp[i] = sum;
        }
        
       return dp[n]; 
    }
};