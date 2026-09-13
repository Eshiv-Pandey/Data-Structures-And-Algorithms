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
    vector<int> ans;
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;
        preorder(root);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
    void preorder(TreeNode* node){
        if(!node) return;
        ans.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
        return;
    }
};