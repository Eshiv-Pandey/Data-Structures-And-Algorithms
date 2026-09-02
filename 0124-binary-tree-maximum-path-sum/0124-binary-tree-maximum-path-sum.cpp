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
    int sum=0;
    int maxPathSum(TreeNode* root) {
        sum=root->val;
        maxH(root);
        return sum;
    }

    int maxH(TreeNode* root){
        if(root==NULL) return 0;
        int left=max(0,maxH(root->left));
        int right=max(0,maxH(root->right));
        sum=max(sum,left+right+root->val);
        return root->val+max(left,right);
    }
};