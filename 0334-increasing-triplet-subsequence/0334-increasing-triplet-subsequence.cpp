class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int maxele=1;
        vector<int>dp;
        // dp.push_back(nums[0]);
        for(int i=0;i<nums.size();i++){
            auto k=lower_bound(dp.begin(),dp.end(),nums[i]);
            if(k==dp.end())dp.push_back(nums[i]);
            else *k=nums[i];
            if(dp.size()>=3)return true;
        }
        // return *max_element(dp.begin(),dp.end());r
        return false;
    }
};