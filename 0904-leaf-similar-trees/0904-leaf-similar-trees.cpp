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
    void leaf(TreeNode* root,vector<int>& vec){
        if(!root)return;
        if(!root->left && !root->right)vec.push_back(root->val);
         leaf(root->left,vec);
         leaf(root->right,vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1,l2;
        leaf(root1,l1);
        leaf(root2,l2);
        return l1==l2;        
    }
};