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
    void fun(TreeNode* root,vector<int>& v){
        if(!root)return;
        // stack<TreeNode*> l
        stack<TreeNode*> in;
        TreeNode* curr=root;
        // in.push(root);
        while(!in.empty() || curr){
            // curr=in.top();
            while(curr){
                in.push(curr);
                curr=curr->left;
            }
            curr=in.top();
            in.pop();
            v.push_back(curr->val);
            curr=curr->right;
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        fun(root,v);
        return v;
    }
};