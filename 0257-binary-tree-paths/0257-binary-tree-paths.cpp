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
    void fun(vector<string>& ans,string s,TreeNode* root){
        if(!root){
            return;
        }
        if(!s.empty())s+="->";
        s+=to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(s);
            return;
        }
        fun(ans,s,root->left);
        fun(ans,s,root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        fun(ans,"",root);
        return ans;
    }
};