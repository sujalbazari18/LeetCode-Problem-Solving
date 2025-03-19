class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(i+1>=1 && i+2>=n)return -1;
                nums[i]=1;
                nums[i+1]=!nums[i+1];
                nums[i+2]=!nums[i+2];
                ans++;
            }
        }
        // for(int i=n-2;i<n;i++){
        //     if(i>=0 && nums[i]==0)return -1;
        // }
        return ans;
    }
};