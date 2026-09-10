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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* eshiv=new TreeNode(val);
        TreeNode* node=root;
        if(!node) return eshiv;
        if(node->val>val){
            if(!node->left) node->left=eshiv;
            else insertIntoBST(node->left,val);
        } 
        else if(node->val<val){
            if(!node->right) node->right=eshiv;
            else insertIntoBST(node->right,val);
        } 
        return root;
    }
};