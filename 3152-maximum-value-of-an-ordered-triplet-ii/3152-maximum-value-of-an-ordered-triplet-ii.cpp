class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        // long long ans=0;
        // int n=nums.size(),m=nums[0];
        // vector<int> suffix(n,-1);
        // suffix[n-1]=nums[n-1];
        // for(int i=n-2;i>=0;i--){
        //     suffix[i]=max(suffix[i+1],nums[i]);
        // }
        long long a=0,b=0,c=0;
        for(long long i:nums){
            a=max(a,b*i);
            b=max(b,c-i);
            c=max(c,i);
        }
        return a;
    }
};