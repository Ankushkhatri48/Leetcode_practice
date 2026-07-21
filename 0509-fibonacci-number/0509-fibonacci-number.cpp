class Solution {
public:

    int memo(int n, vector<int>& dp){
        if(n==0 || n==1) return dp[n]=n;
        if(dp[n] != -1) return dp[n];
        int x = memo(n-1,dp);
        int y;
        if(dp[n-2] != -1) y = dp[n-2];
        else{
         y = memo(n-2,dp);
        }
        return dp[n] = x+y;
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return memo(n,dp);
    }
};