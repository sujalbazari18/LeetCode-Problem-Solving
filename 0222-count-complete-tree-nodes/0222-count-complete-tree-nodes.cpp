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
        if(!root)return 1;
        return fun(root->left)+fun(root->right);
    }
    int countNodes(TreeNode* root) {
        // if(!root)return 1;
        // return countNodes(root->left)+countNodes(root->right);
        return fun(root)-1; 
    }
};