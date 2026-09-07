class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int x:nums1){
            int index = -1;
            
            for(int i=0;i<nums2.size();i++){
                if(x == nums2[i]){
                    index = i;
                    break;
                }
            }
            int gt=-1;
            for(int i=index+1;i<nums2.size();i++){
                if(nums2[i]>nums2[index]){
                    gt = nums2[i];
                    break;
                }
            }
            ans.push_back(gt);
            
        }
        return ans;
    }
};