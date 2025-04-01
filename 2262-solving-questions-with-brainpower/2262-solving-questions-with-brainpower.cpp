class Solution {
public:
    // long long fun(int i,vector<vector<int>> q,vector<long long>& dp){
    //     if(i>=q.size())return 0;
    //     if(dp[i]!=-1)return dp[i];
    //     long long skip=fun(i+1,q,dp);
    //     long long take=q[i][0]+fun(i+q[i][1]+1,q,dp);
    //     return dp[i]=max(skip,take);
    // }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size()+1,0);
        int n=questions.size();
        for(int i=0;i<n;i++){
            if(i>0)dp[i]=max(dp[i],dp[i-1]);
            int next=i+questions[i][1]+1;
            int take=questions[i][0];
            if(next<n)dp[next]=max(dp[next],dp[i]+take);
            else
            dp[n]=max(dp[n],dp[i]+take);
        }
        return max(dp[n],dp[n-1]);
    }
};