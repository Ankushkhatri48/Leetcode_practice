class Solution {
public:

    // int memo(int n, vector<int>& dp){
    //     if(n==0 || n==1) return dp[n]=n;
    //     if(dp[n] != -1) return dp[n];
    //     int x;
    //     if(dp[n-1] != -1) x = dp[n-1];
    //     else{
    //     x = memo(n-1,dp);
    //     }
    //     int y;
    //     if(dp[n-2] != -1) y = dp[n-2];
    //     else{
    //      y = memo(n-2,dp);
    //     }
    //     return dp[n] = x+y;
    // }
    int fib(int n) {
        if(n==0 || n==1) return n;
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] =1;
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
        //return memo(n,dp);
    }
};