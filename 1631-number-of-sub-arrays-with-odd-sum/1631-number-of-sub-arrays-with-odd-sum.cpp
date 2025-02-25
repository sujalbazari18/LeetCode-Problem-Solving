class Solution {
public:
    int m=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int even=1,odd=0;
        int ans=0;
        int prefix=0;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            if(prefix%2==0){
                ans=(ans+odd)%m;
                even++;
            }else{
                ans=(ans+even)%m;
                odd++;
            }
        }
        return ans%m;
    }
};