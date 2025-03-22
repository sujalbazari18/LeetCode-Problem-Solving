class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int ans=INT_MIN;
        int prefix=0;
        for(int i=0;i<n;i++){
            ans=max(prefix,ans);
            prefix+=gain[i];
        }
        ans=max(prefix,ans);
        return ans;
    }
};