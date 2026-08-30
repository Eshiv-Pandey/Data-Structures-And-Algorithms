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
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        ans.clear();
        levelorder(root);
        return ans;
    }
    void levelorder(TreeNode* root){
        if (root == nullptr) return;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            vector<int> lvl;
            int j=qu.size();
            for(int i=0;i<j;i++){
                TreeNode* node= qu.front();
                qu.pop();
                if(node->left!=nullptr) qu.push(node->left);
                if(node->right!=nullptr) qu.push(node->right);
                lvl.push_back(node->val);
            }ans.push_back(lvl);
        }
    }
};