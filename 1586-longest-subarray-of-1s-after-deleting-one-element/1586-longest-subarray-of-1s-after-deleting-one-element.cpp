class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int len=0,zero=0,l=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)zero++;
            while(zero>1){
                if(nums[l]==0)zero--;
                l++;
            }
            len=max(len,i-l);
        }
        return len;
    }
};