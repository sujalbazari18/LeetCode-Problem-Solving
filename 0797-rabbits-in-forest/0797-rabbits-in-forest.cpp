class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        for(int i:answers){
            mp[i]++;
        }
        int ans=0;
        for(auto& a:mp){
            int g=(a.second+a.first)/(a.first+1);
            ans+=g*(a.first+1);
        }
        return ans;
    }
};