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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        int l,i;
        while(!q.empty()){
            l=q.size();
            vector<int> k;
            for(i=0;i<l;i++){
                TreeNode* n=q.front();
                q.pop();
                k.push_back(n->val);
                if(n->left!=NULL){
                    q.push(n->left);
            }
            if(n->right!=NULL){
                q.push(n->right);
            }
            }
            result.push_back(k);
        }
        return result;
    }

};