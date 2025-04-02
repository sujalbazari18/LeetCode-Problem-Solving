class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             ans=max(((1LL*nums[i]-nums[j])*nums[k]),ans);
        //         }
        //     }
        // }
        long long ans=0;
        int n=nums.size(),m=nums[0];
        vector<int> suff(n,-1);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)suff[i]=max(nums[i],suff[i+1]);
        for(int i=1;i<n-1;i++){
            ans=max(ans,(1LL*(m-nums[i])*suff[i+1]));
            m=max(m,nums[i]);
        }
        return ans;
    }
};