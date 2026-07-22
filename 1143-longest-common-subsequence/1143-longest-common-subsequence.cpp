// class Solution {
// public:
//     int helper(string &s1, string &s2, int i, int j, vector<vector<int>> &dp){
//         if(i<0 || j<0 ){
//             return 0;
//         }
//         if(s1[i] == s2[j]){
//             return 1+helper(s1,s2,i-1,j-1);
//         }
//         return max(helper(s1,s2,i-1,j),helper(s1,s2,i,j-1));
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n = text1.size();
//         int m = text2.size();
//         vector<vector<int>> dp(n,vector<int> (m,-1));
//         return helper(text1,text2,n-1,m-1);
//     }
// };
class Solution {
public:
    int solve(int i, int j, string &text1, string &text2, vector<vector<int>> &dp) {

        if(i == text1.size() || j == text2.size())
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        if(text1[i] == text2[j])
            return dp[i][j] = 1 + solve(i + 1, j + 1, text1, text2, dp);

        return dp[i][j] = max(solve(i + 1, j, text1, text2, dp),
                              solve(i, j + 1, text1, text2, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {

        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return solve(0, 0, text1, text2, dp);
    }
};