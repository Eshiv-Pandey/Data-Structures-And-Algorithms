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
    bool isValidBST(TreeNode* root) {
        return isValidBST(root,LONG_MAX,LONG_MIN);
    }
    bool isValidBST(TreeNode* node,long maxi,long mini){
        if(!node) return true;
        if(node->val>=maxi || node->val <=mini) return false;
        return isValidBST(node->left,node->val,mini) && isValidBST(node->right,maxi,node->val);
    }
};