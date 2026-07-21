class Solution {
public:
    int stairs(int n, vector<int> &dp){
        if(n==0) return dp[1] = 1;
        if(n<=0) return 0;
        if(dp[n] != -1) return dp[n];
        int x = stairs(n-1,dp);
        int y= stairs(n-2,dp);
        return dp[n] = x+y;

    }
    int climbStairs(int n) {
    vector<int> dp(n+1,-1);
    return stairs(n,dp);
    }
};