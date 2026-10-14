class Solution {
private:
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || vis[i][j]) return;
        vis[i][j]=1;
        dfs(grid,vis,i,j+1);
        dfs(grid,vis,i,j-1);
        dfs(grid,vis,i+1,j);
        dfs(grid,vis,i-1,j);
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            dfs(grid,vis,i,0);
            dfs(grid,vis,i,n-1);
        }
        for(int j=0;j<n;j++){
            dfs(grid,vis,0,j);
            dfs(grid,vis,m-1,j);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 & !vis[i][j]) ans++;
            }
        }return ans;
    }
};