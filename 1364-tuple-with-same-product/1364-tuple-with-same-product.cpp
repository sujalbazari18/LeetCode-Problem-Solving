class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> find;
        int n=nums.size();
        int maxfreq=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                // if(num2!=num2){
                    find[nums[i]*nums[j]]++;
                // }
                // maxfreq=max(maxfreq,find[num1*num2]);
            }
        } 
        int ans=0;
        for(auto& i:find){
            if(i.second>=2){
                ans+=i.second*(i.second-1)/2*8;
            }
        }
        return ans;
    }
};