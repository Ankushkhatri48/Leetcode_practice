class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
       
        for(int i=0;i<nums.size();i++){
            bool found = false;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    ans.push_back(nums[j]);
                    found = true;
                    break;
                }
            }
            if(!found){
                for(int k=0;k<i;k++){
                    if(nums[k]>nums[i]){
                        ans.push_back(nums[k]);
                        found = true;
                        break;
                    }
                }
            }
             if(!found){   
                ans.push_back(-1);
             }

        }
    return ans;
    }
};