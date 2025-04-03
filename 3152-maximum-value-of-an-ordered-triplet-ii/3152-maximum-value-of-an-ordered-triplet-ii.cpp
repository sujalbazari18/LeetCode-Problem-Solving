class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        int n=nums.size(),m=nums[0];
        vector<int> suffix(n,-1);
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++){
            ans=max(ans,(1LL*(m-nums[i])*suffix[i+1]));
            m=max(m,nums[i]);
        }
        return ans;
    }
};