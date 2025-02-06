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
void fun(TreeNode* root,vector<int>& ans){
    if(!root)return;
    stack<TreeNode*> pre;
    pre.push(root);
    while(!pre.empty()){
        TreeNode* p=pre.top();
        pre.pop();
        // cout<<p<<endl;
        ans.push_back(p->val);
        if(p->right)pre.push(p->right);
        if(p->left)pre.push(p->left);
    }
    
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        fun(root,ans);
        return ans;
    }
};