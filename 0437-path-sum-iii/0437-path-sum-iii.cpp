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
    int c=0;
    void fun(TreeNode* root,long long target){
        if(!root)return;
        // if(target<0)return;
        if(root->val==target)c++;
        fun(root->left,target-root->val);
        fun(root->right,target-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        fun(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return c;
    }
};