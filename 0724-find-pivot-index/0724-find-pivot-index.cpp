class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        // vector<int> pref(nums.size());
        int pref=nums[0];
        for(int i=1;i<n;i++){
            pref+=nums[i];
        }
        int leftsum=0;
        for(int i=0;i<n;i++){
            int rightsum=pref-nums[i]-leftsum;
            if(rightsum==leftsum)return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};