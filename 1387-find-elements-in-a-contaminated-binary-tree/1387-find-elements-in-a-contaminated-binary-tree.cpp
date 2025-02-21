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
class FindElements {
public:
    set<int> s;
    FindElements(TreeNode* root) {
        fun(root,0);
    }
    void fun(TreeNode* root,int x){
        if(!root)return;
        root->val=x;
        s.insert(x);
        fun(root->left,x*2+1);
        fun(root->right,x*2+2);
    }
    bool find(int target) {
        if(s.find(target)!=s.end())return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */