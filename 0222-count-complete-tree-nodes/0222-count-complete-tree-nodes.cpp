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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int left=maxHl(root);
        int right=maxHr(root);
        if(left==right) return (1<<left)-1;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
    int maxHl(TreeNode* node){
        if(!node) return 0;
        int height=0;
        while(node){
            node=node->left;
            height++;
        }return height;
    }
    int maxHr(TreeNode* node){
        if(!node) return 0;
        int height=0;
        while(node){
            node=node->right;
            height++;
        }return height;
    }
};