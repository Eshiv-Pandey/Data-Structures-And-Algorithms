/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        ans.push_back({root->val});
        int cnt=2;
        while(!q.empty()){
            vector<int> level;
            int j=q.size();
            for(int i=0;i<j;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->right){
                    q.push(node->right);
                    level.push_back(node->right->val);
                }
                if(node->left){
                    q.push(node->left);
                    level.push_back(node->left->val);
                } 
            }if(cnt%2!=0) reverse(level.begin(), level.end());
            cnt++;
            if(level.size()) ans.push_back(level);
        }return ans;
    }
};