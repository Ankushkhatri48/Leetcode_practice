class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool ab = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                return ab = true;
            }
        }
        return ab;
    }
};