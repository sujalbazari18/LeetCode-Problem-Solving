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
    // int res=0;
    int fun(TreeNode* root,int& res){
        if(!root)return 0;
        int l=fun(root->left,res);
        int r=fun(root->right,res);
        res=max(l+r,res);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // if(!root)return 0;
        int res=0;
        fun(root,res);
        return res;
    }
};