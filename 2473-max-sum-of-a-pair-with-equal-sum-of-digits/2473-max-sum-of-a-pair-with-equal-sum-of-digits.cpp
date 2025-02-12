class Solution {
public:
    int sumofDigits(int n){
        int k=0;
        while(n>0){
            k+=n%10;
            n/=10;
        }
        return k;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> s;
        int maxSum=-1;
        for(auto& i:nums){
            int d=sumofDigits(i);
            if(s.find(d)!=s.end()){
                maxSum=max(maxSum,s[d]+i);
                s[d]=max(s[d],i);
            }else{
                s[d]=i;
            }
        }
        return maxSum;
    }
};