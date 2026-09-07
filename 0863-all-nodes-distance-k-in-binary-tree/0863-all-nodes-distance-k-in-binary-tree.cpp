/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*> parent;
    void markparent(TreeNode* root){
        queue<TreeNode*> q;
        if(!root) return;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node->left){
                parent[node->left]=node;
                q.push(node->left);
            } 
            if(node->right){
                q.push(node->right);
                parent[node->right]=node;
            } 
        }return;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        markparent(root);
        unordered_map<TreeNode*,int> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=1;
        int curr=0;
        while(!q.empty()){
            int j=q.size();
            if(curr++==k) break;
            for(int i=0;i<j;i++){
                TreeNode* node=q.front();
                q.pop();
                if(parent[node] && !visited[parent[node]]){
                    visited[parent[node]]=1;
                    q.push(parent[node]);
                }
                if(node->left && !visited[node->left]){
                    visited[node->left]=1;
                    q.push(node->left);
                }
                if(node->right && !visited[node->right]){
                    visited[node->right]=1;
                    q.push(node->right);
                }
            }   
        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }return ans;
    }
};