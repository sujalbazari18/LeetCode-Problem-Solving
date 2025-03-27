class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mp;
        int n=grid.size();
        int ans=0;
        for(auto& g:grid){
            mp[g]++;
        }
        for(int i=0;i<n;i++){
            vector<int> col;
            for(int j=0;j<n;j++){
                col.push_back(grid[j][i]);
            }
            if(mp.find(col)!=mp.end())ans+=mp[col];
        }
        return ans;
    }
};