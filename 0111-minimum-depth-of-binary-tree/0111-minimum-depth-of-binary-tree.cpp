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
    int fun(TreeNode* root){
        if(!root)return 0;
        int a=fun(root->left);
        int b=fun(root->right);
        if(!root->left)return b+1;
        if(!root->right)return a+1;
        return 1+min(a,b);
    }
    int minDepth(TreeNode* root) {
        return fun(root);
    }
};