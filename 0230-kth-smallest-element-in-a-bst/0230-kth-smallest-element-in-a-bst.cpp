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
    int cnt=0;
    int kthSmallest(TreeNode* root, int k) {
        int ans=0,cnt=0;
        if(!root) return 0;
        inorder(root,ans,cnt,k);
        return ans;
    }
    void inorder(TreeNode* node,int &ans,int &cnt,int k){
        if(!node) return;
        inorder(node->left,ans,cnt,k);
        cnt++;
        if(cnt==k){
            ans=node->val;
            return;
        }
        inorder(node->right,ans,cnt,k);
        return;
    }
};