class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<=n-k;i++){
            unordered_set<int> s(nums.begin()+i,nums.begin()+i+k);
            for(int num:s){
                mp[num]++;
            }
        }
        int ans=-1;
        for(auto [a,b]:mp){
            if(b==1 && a>ans)ans=a;
        }
        return ans;
    }
};