class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size()*2;
        vector<int> ab(n);
        for(int i=0;i<nums.size();i++){
            ab[i]=nums[i];
            ab[i+nums.size()] = nums[i];
        }
        return ab;
    }
};