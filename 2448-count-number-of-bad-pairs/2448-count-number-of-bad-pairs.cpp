class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        unordered_map<int ,long long> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]-i]++;
        }
        for(auto& [key,val]:map){
            ans+=(val*(val-1))/2;
        }
        return (1LL *n*(n-1)/2)-ans;
    }
};