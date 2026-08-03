class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>> q;
        int visited[n][m];
        int cntfresh = 0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    visited[i][j] =2;
                }else{
                    visited[i][j] = 0;
                }
                if(grid[i][j] == 1) cntfresh++;
            }
        }
        int tm = 0;
        int Delrow[]={-1,0,1,0};
        int Delcol[] = {0,1,0,-1};
        int count =0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;
            tm = max(tm, time);
            q.pop();
            for(int i =0;i<4;i++){
                int neighrow= row+Delrow[i];
                int neighcol= col+Delcol[i];
                if(neighrow>=0 && neighcol>=0 && neighrow <n && neighcol <m && visited[neighrow][neighcol] != 2 && grid[neighrow][neighcol] == 1){
                    q.push({{neighrow,neighcol},time+1});
                    visited[neighrow][neighcol] = 2;
                    count++;
                }
            }

        }
        if(count != cntfresh) return -1;
        return tm;
    }
};