class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int a=0;
        int b=0,ans=0;
        for(int i=0;i<n;i++){
            // if(nums[i]==1)ans++;
            if(nums[i]==0){
                a++;
            }
            while(a>k){
                if(nums[b]==0){
                    a--;
                }
                b++;
            }
            ans=max(ans,i-b+1);
        }
        return ans;
    }
};