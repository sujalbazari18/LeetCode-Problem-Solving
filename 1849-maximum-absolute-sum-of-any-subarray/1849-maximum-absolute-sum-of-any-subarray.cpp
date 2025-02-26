class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size(),ans=0;
        int sum=0,minSum=0,maxsum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxsum=max(maxsum,(sum));
            minSum=min(minSum,(sum));
        }
        return abs(minSum-maxsum);
    }
};