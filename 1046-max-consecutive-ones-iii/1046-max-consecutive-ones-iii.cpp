class Solution {
public:
    bool isValid(int mid,int k,vector<int>& nums){
        int zeros=0;
        for(int i=0;i<mid;i++){
            if(nums[i]==0)zeros++;
        }
        if(zeros<=k)return true;
        for(int i=mid;i<nums.size();i++){
            if(nums[i-mid]==0)zeros--;
            if(nums[i]==0)zeros++;
            if(zeros<=k)return true;
        }
        return false;
    }
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        // int a=0;
        // int b=0,ans=0;
        // for(int i=0;i<n;i++){
        //     // if(nums[i]==1)ans++;
        //     if(nums[i]==0){
        //         a++;
        //     }
        //     while(a>k){
        //         if(nums[b]==0){
        //             a--;
        //         }
        //         b++;
        //     }
        //     ans=max(ans,i-b+1);
        // }
        // return ans;
        int left=0,right=n,ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isValid(mid,k,nums)){
                ans=mid;
                left=mid+1;
            }else right=mid-1;
        }
        return ans;
    }
};