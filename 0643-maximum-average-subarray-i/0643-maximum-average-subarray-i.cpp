class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double aver=0.0;
        for(int i=0;i<k;i++){
            aver+=nums[i];
        }
        double maxSum=aver;
        for(int i=k;i<nums.size();i++){
           aver+=nums[i]-nums[i-k];
           maxSum=max(maxSum,aver);
        }
        return maxSum/k;
    }
};