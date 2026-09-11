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
    set<int> st;
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(st.find(k-root->val)==st.end()) st.insert(root->val);
        else return true;
        bool left=findTarget(root->left,k);
        bool right=findTarget(root->right,k);
        if(left||right) return true;
        return false;
    }
};