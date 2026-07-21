class Solution {
public:

    // int helper(vector<int> & nums, int i, int n){
    //     if(i>=n) return 0;
    //     int take = nums[i] + helper(nums,i+2,n);
    //     int nottake = helper(nums,i+1,n);
    //     return max(take,nottake);
    // }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp(n+1,-1);
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-1],nums[i] + dp[i-2]);
        }
        return max(dp[n-1],dp[n-2]);
        // return helper(nums,0,nums.size());
    }
};