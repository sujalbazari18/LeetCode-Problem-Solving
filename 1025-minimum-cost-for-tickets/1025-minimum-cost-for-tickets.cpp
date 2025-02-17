class Solution {
public:
    // int fun(int i,int curr,vector<int>& days,vector<int>& costs,vector<vector<int>>& dp){
    //     if(i==days.size())return 0;
    //     if(dp[i][curr]!=-1)return dp[i][curr];
    //     int n=INT_MAX,t1=INT_MAX,t2=INT_MAX,t3=INT_MAX;
    //     if(curr>=days[i])n=fun(i+1,curr,days,costs,dp);
    //     t1=costs[0]+fun(i+1,0,days,costs,dp);
    //     t2=costs[1]+fun(i+1,days[i]+6,days,costs,dp);
    //     t3=costs[2]+fun(i+1,days[i]+29,days,costs,dp);
    //     return dp[i][curr]=min({n,t1,t2,t3});
    // }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<vector<int>> dp(n+1,vector<int>(396,0));
        for(int i=n-1;i>=0;i--){
            for(int j=395;j>=0;j--){
                int n=INT_MAX,t1=INT_MAX,t2=INT_MAX,t3=INT_MAX;
                if(j>=days[i])n=dp[i+1][j];
                t1=costs[0]+dp[i+1][0];
                t2=costs[1]+dp[i+1][days[i]+6];
                t3=costs[2]+dp[i+1][days[i]+29];
                dp[i][j]=min({t1,t2,t3,n});
            }
        }
        return dp[0][0];
        // return fun(0,0,days,costs,dp);
    }
};