class Solution {
public:
    // int solve(string word1,string word2,int i,int j,vector<vector<int>>& dp){
    //     if(i>=word1.size())return word2.size()-j;
    //     if(j>=word2.size())return word1.size()-i;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     if(word1[i]==word2[j])return dp[i][j]=solve(word1,word2,i+1,j+1,dp);
    //     else return dp[i][j]=1+min({solve(word1,word2,i+1,j+1,dp),solve(word1,word2,i+1,j,dp),solve(word1,word2,i,j+1,dp)});
    // }
    int minDistance(string word1, string word2) {
        // vector<vector<int>> dp(word1.size(),vector<int>(word2.size(),-1));
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++)dp[i][0]=i;
        for(int j=0;j<=m;j++)dp[0][j]=j;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(word1[i-1]==word2[j-1])dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=1+min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]});
            }
        }
        return dp[n][m];
        // return solve(word1,word2,0,0,dp);
    }
};