class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> com;
        vector<vector<int>> ans;
        fun(com,ans,k,n,1);
        return ans;
    }
    void fun(vector<int>& com,vector<vector<int>>& ans,int k,int n,int start){
        if(com.size()==k){
            ans.push_back(com);
            return;
        }
        for(int i=start;i<=n;i++){
            com.push_back(i);
            fun(com,ans,k,n,i+1);
            com.pop_back();
        }
    }
};