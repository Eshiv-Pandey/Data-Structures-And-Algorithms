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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int cnt=0;
        return builder(preorder,cnt,INT_MAX);
    }
    TreeNode* builder(vector<int> preorder, int &cnt,int ub){
        if(cnt>=preorder.size() || preorder[cnt]>ub) return NULL;
        TreeNode* root=new TreeNode(preorder[cnt++]);
        root->left=builder(preorder,cnt,root->val);
        root->right=builder(preorder,cnt,ub);
        return root;
    }
};