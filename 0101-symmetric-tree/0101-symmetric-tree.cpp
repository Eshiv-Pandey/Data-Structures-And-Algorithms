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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true; 
        return maxH(root->left,root->right);
    }
    bool maxH(TreeNode* p,TreeNode* q){
        if(p==NULL||q==NULL) return (p==q);
        if(p->val!=q->val) return false;
        bool v1=maxH(p->left,q->right);
        bool v2=maxH(p->right,q->left);
        return (v1 && v2);
    }
};