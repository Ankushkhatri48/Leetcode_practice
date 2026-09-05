class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int complete = target - nums[i];
            if(mp.find(complete) != mp.end()){
                return { mp[complete], i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};