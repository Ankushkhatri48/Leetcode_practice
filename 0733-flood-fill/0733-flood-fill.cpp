class Solution {
private:
    void dfs(int row, int col, vector<vector<int>> & ans, vector<vector<int>> & image, int newcolor, int inicolor, int Delrow[], int Delcol[]){
        ans[row][col] = newcolor;
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int neighrow = row + Delrow[i];
            int neighcol = col + Delcol[i];
            if(neighcol >= 0 && neighrow >=0 && neighrow <n && neighcol < m && image[neighrow][neighcol] == inicolor && ans[neighrow][neighcol] !=  newcolor){
                dfs(neighrow,neighcol,ans,image,newcolor,inicolor,Delrow,Delcol);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];
        if(inicolor == color) return image;
        vector<vector<int>> ans = image;
        int Delrow[] = {-1,0,1,0};
        int Delcol[] = {0,1,0,-1};
        dfs(sr, sc, ans, image, color, inicolor, Delrow, Delcol);
        return ans;
    }
};