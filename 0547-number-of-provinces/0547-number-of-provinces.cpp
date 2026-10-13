class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj,vector<int>& vis){
        vis[node]=1;
        for(auto neighbour:adj[node]){
            if(!vis[neighbour]) dfs(neighbour,adj,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int> vis(isConnected.size(),0);
        int ans=0;
        for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                ans++;
                dfs(i,adj,vis);
            }
        }return ans;
    }
};