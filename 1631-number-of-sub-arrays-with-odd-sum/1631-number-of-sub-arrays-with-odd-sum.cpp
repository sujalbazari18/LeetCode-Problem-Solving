class Solution {
public:
    int m=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        // int n=arr.size();
        // vector<int> prefix;
        // prefix[0]=arr[0];
        long long odd=0,pre=0;
        for(int a:arr){
            pre+=a;
            odd+=pre%2;
        }
        odd+=(arr.size()-odd)*odd;
        return odd%m;
    }
};