class Solution {
public:
    long fun(int i,vector<vector<int>>& q,vector<long>& dp,int n){
        if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
        long take=q[i][0]+fun(i+q[i][1]+1,q,dp,n);
        long skip=fun(i+1,q,dp,n);
        return dp[i]=max(skip,take);

    }
    long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long> dp(n,-1);
        return fun(0,questions,dp,n);
    }
};