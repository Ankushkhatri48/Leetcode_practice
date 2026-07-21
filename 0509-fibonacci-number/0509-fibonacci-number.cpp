class Solution {
public:

    int memo(int n, vector<int>& dp){
        if(n==0 || n==1) return n;
        if(dp[n] != -1) return dp[n];
        int x = memo(n-1,dp);
        int y= memo(n-2,dp);
        return dp[n] = x+y;
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return memo(n,dp);
    }
};