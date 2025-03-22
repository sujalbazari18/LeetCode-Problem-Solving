class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(nums.size());
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=nums[i]+pref[i-1];
        }
        vector<int> suf(nums.size());
        suf[n-1]=nums[nums.size()-1];
        int l=1;
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(pref[i]==suf[i])return i;
        }
        return -1;
    }
};