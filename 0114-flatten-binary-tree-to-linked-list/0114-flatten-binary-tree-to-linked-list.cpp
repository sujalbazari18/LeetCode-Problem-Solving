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
    void preorder(TreeNode* root,vector<int>& v){
        if(!root)return;
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    void flatten(TreeNode* root) {
        if(!root)return;
        vector<int> v;
        preorder(root,v);
        // TreeNode* node=new TreeNode(v[0]);
        TreeNode* curr=root;
        curr->left=nullptr;
        for(int i=1;i<v.size();i++){
            curr->right=new TreeNode(v[i]);
            curr=curr->right;
        }
    }
};