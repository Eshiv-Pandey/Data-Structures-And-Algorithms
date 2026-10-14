class Solution {
public:
    void dfs(vector<vector<int>>& image,int i, int j, int color,int org,vector<vector<int>> &copy){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=org || copy[i][j]==color) return;
        copy[i][j]=color;
        dfs(image,i,j+1,color,org,copy);
        dfs(image,i,j-1,color,org,copy);
        dfs(image,i-1,j,color,org,copy);
        dfs(image,i+1,j,color,org,copy);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> copy=image;
        int org=image[sr][sc];
        dfs(image,sr,sc,color,org,copy);
        return copy;
    }
};