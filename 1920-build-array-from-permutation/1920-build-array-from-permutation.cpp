class Solution {
public:

    int ab(vector<int> & nums,int a){
        
        return nums[a];
    }
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
    
        for(int i=0;i<n;i++){
            ans[i] = ab(nums, nums[i]);
        }
        return ans;
    }
};