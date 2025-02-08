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
    TreeNode* search(TreeNode* root,int v){
        if(!root)return NULL;
        if(root->val==v)return root;
        if(root->val>v)return search(root->left,v);
        else return search(root->right,v);
        // return root;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return search(root,val);
    }
};