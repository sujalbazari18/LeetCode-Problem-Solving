class Solution {
public:
    // void fun(vector<int>& nums,int i,vector<int>& ans,vector<int>& temp){
    //     if(temp.size()>ans.size())ans=temp;
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[j]%nums[i]==0){
    //             temp.push_back(nums[j]);
    //             fun(nums,j,ans,temp);
    //             temp.pop_back();
    //         }
    //     }
    // }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        // return {0};
        if(nums.empty())return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> dp(nums.size());
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     vector<int> temp;
        //     temp.push_back(nums[i]);
        //     fun(nums,i,ans,temp);
        // }
        for(int i=0;i<nums.size();i++){
            dp[i].push_back(nums[i]);
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[j].size()+1>dp[i].size()){
                    dp[i]=dp[j];
                    dp[i].push_back(nums[i]);
                }
            }
        }
        vector<int> result;
        for(const auto& a:dp){
            if(a.size()>result.size())result=a;
        }

        return result;
    }
};