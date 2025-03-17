class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums)mp[num]++;
        int k=0;
        for(auto [a,b]:mp){
            if(b%2!=0)return false;
            k+=b;
        }
        return k==nums.size();
    }
};