class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> ans=grid;
        int m=grid.size(),n=grid[0].size();
        while(k){
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    if(i==0 && j==0) ans[i][j]=grid[m - 1][n - 1];
                    else if(j==0 && i!=0) ans[i][j]=grid[i-1][n - 1];
                    else ans[i][j]=grid[i][j-1];
                }
            }k--;
            grid=ans;

        }return ans;
    }
};