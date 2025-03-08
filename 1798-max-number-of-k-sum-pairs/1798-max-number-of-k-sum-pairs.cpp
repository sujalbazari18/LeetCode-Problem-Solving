class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i:nums){
            int c=k-i;
            if(mp[c]>0){
                ans++;
                mp[c]--;
            }
            else mp[i]++;
        }

        // sort(nums.begin(),nums.end());
        // int i=0,j=nums.size()-1;
        // while(i<j){
        //     int sum=nums[i]+nums[j];
        //     if(nums[i]+nums[j]==k){
        //         i++;
        //         j--;
        //         ans++;
        //     }
        //     else if(sum<k){
        //         i++;
        //     }else{
        //         j--;
        //     }
        // }
        return ans;
    }
};