class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto& i:nums)mp[i]++;
        int d=0;
        for(auto& [a,b]:mp){
            if(b>n/2){
                d=a;
                break;
            }
        }
        int left=0,total=mp[d];
        for(int i=0;i<n-1;i++){
            if(nums[i]==d)left++;
            int right=total-left;
            if(left*2>(i+1)&&right*2>(n-i-1))return i;
        }
        return -1;
    }
};