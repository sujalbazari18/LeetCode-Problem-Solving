class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto& a:nums){
            mp[a]++;
        }   
        for(auto& [a,b]:mp){
            if(b>=2)return a;
        }
        return 0;
    }
};