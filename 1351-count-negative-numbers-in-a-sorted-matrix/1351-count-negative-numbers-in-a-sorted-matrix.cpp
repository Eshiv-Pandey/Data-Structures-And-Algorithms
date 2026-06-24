class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            int low=grid[i].size()-1,high=0;
            while(low>=high){
                int mid=(low+high)/2;
                if(grid[i][mid]>=0) high=mid+1;
                else low=mid-1;
            }cnt+=grid[i].size()-high;
        }return cnt;
    }
};