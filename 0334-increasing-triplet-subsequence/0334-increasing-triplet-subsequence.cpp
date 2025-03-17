class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int maxele=1;
        vector<int>dp(n,1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])dp[i]=max(dp[i],dp[j]+1);
            }
            maxele=max(maxele,dp[i]);
        }
        // return *max_element(dp.begin(),dp.end());r
        return maxele>=3;
    }
};