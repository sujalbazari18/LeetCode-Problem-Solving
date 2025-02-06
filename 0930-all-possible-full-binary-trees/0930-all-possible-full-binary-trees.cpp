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
        vector<vector<TreeNode*>> dp;
    // void print()
    vector<TreeNode*> allPossibleFBT(int n){
        if(n%2==0)return {};
        if(dp.empty())dp.resize(n+1);
        if(!dp[n].empty())return dp[n];
        if(n==1)return dp[n]={new TreeNode(0)};
        vector<TreeNode*> result;
        for(int i=1;i<n;i+=2){
            vector<TreeNode*> left=allPossibleFBT(i);
            vector<TreeNode*> right=allPossibleFBT(n-1-i);
            for(auto& lefts:left){
                for(auto& rights:right){
                    result.push_back(new TreeNode(0,lefts,rights));
                }
            }
        }
        return dp[n]=result;
    }
};