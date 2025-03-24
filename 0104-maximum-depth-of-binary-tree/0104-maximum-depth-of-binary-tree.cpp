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
// class Solution {
public:
    void max(TreeNode* root, int& c, int d) {
        if (root == NULL) {
            if (d > c) {
                c = d;
            }
            return;
        }
        max(root->left, c, d + 1);
        max(root->right, c, d + 1);
    }
    
    int maxDepth(TreeNode* root) {
        int c = 0;
        max(root, c, 0);
        return c;
    }
};
