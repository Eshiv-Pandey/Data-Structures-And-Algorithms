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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val==key) return helper(root);
        TreeNode* node=root;
        while(node!=NULL){
            if(node->val>key){
                if(node->left && node->left->val==key) node->left=helper(node->left);
                else node=node->left;
            }else{
                if(node->right && node->right->val==key) node->right=helper(node->right);
                else node=node->right;
            }
        }
        return root;
    }
    TreeNode* helper(TreeNode* node){
        if(!node) return node;
        if(!node->left) return node->right;
        TreeNode* rightside= node->right;
        TreeNode* rightmost= righter(node->left);
        rightmost->right=rightside;
        return node->left;
    }
    TreeNode* righter(TreeNode* node){
        if(!node) return node;
        while(node->right) node=node->right;
        return node;
    }
};