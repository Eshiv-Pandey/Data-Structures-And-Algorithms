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
    int averageOfSubtree(TreeNode* root) {
        avg(root);
        return cnt;
    }
    pair<int,int> avg(TreeNode* node){
        if(!node) return {0,0};
        auto left=avg(node->left);
        auto right=avg(node->right);
        int sum=left.first+right.first+node->val;
        int count=left.second+right.second+1;
        int avgg=sum/count;
        if(avgg==node->val) cnt++;
        return {sum,count};
    }
};