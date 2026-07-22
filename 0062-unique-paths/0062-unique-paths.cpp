class Solution {
public:

    // int solve(vector<vector<int>> &dp,int i, int j, int m, int n){
    //     if(i<0 || j<0){
    //         return 0;
    //     }
    //         if(dp[i][j] != -1){
    //             return dp[i][j];
    //         }
    //     if(i ==0 && j==0){
    //         return dp[i][j]=1;
    //     }
        
    //     int left = solve(dp,i-1,j,m,n);
    //     int up = solve(dp,i,j-1,m,n);
    //     return dp[i][j] =left+up;
        
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,0));
  dp[1][1] = 1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(i==1 && j==1){
                    continue;
                }
                dp[i][j] = dp[i-1][j] +dp[i][j-1];
            }
        }
        return dp[m][n];


        // int i= m-1;
        // int j=n-1;
        // return solve(dp,i,j,m,n);


    }
};