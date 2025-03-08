class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // set<int> s;
        int ans=0;
        // for(int i:nums)s.insert(i);
        // for(int i=0;i<nums.size();i++){
        //     if(s.count(k-nums[i]))ans++;
            
        // }
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(nums[i]+nums[j]==k){
                i++;
                j--;
                ans++;
            }
            else if(sum<k){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};