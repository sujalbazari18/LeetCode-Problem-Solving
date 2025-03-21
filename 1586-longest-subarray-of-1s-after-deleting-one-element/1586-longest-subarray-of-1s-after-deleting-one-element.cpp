class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0;
        int ans=0;
        // int len=0,zero=0,l=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                a++;
                b++;
            }else{
                a=b;
                b=0;
            }
            ans=max(ans,a);
        }
        return (ans==n)?ans-1:ans;
    }
};