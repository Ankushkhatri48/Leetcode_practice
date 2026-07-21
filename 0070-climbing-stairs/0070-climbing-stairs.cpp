class Solution {
public:
    // int stairs(int n, vector<int> &dp){
    //     if(n==0) return dp[1] = 1;
    //     if(n<=0) return dp[0] =0;
    //     if(dp[n] != -1) return dp[n];
    //     int x = stairs(n-1,dp);
    //     int y= stairs(n-2,dp);
    //     return dp[n] = x+y;

    // }
    int climbStairs(int n) {
        if(n==0) return 1;
        if(n<=0) return 0;
    vector<int> dp(n+1,-1);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
    // return stairs(n,dp);
    }
};