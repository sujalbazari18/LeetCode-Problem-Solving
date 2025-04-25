class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        long long count =0;
        int pre=0;
        unordered_map<int,long long> prefix;
        prefix[0]=1;
        for(int num:nums){
            if(num%modulo==k)pre++;
            pre%=modulo;
            int target=(pre-k+modulo)%modulo;
            if(prefix.find(target)!=prefix.end())count+=prefix[target];

            prefix[pre]++;
        }
        return count;
    }
};