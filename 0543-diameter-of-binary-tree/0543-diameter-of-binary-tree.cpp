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
    int diameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int left=maxH(root->left);
        int right=maxH(root->right);
        diameter=max(diameter,left+right);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return diameter;
    }

    int maxH(TreeNode* root){
        if(root==NULL) return 0;
        int left=maxH(root->left);
        int right=maxH(root->right);
        return 1+max(left,right);
    }
};