class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0)nums[i]=1;
            else nums[i]=0;
        }
        vector<int> ans(n,1);
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)ans[index++]=0;
        }
        return ans;
    }
};