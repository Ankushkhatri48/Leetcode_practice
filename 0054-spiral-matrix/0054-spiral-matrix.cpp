class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0; int bottom = n-1;
        int left = 0; int right = m-1;
        vector<int> ans;
        // left to right
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
        
        // right side top to bottom
            for(int j=top;j<=bottom;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
        

        // bottom side right to left;
        if(top<=bottom){
            for(int k =right;k>=left;k--){
                ans.push_back(matrix[bottom][k]);
                
            }
            bottom--;
        }
        // left side bottom to up
        if(left <=right){
            for(int l = bottom;l>=top;l--){
                ans.push_back(matrix[l][left]);
                
            }
            left++;
        }
    }
    return ans;
    }
};