class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        for(int i=1;i<=pow(grid.size(),2);i++){
            mp[i]++;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                mp[grid[i][j]]++;
            }
        }
        vector<int> ans;
        for(auto it:grid){
            for(auto i:it){
                if(!(find(ans.begin(),ans.end(),i)!=ans.end()))
                if(mp[i]>2 || mp[i]==1)ans.push_back(i);
            }
        }
        for(auto& i:mp){
            if(i.second==1){
                ans.push_back(i.first);
                break;
            }
        }
        return ans;
    }
};