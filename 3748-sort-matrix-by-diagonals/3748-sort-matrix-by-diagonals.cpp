class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        // vector<vector<int>> ans(n,vector<int>(m));
        unordered_map <int,vector<int>> mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i-j].push_back(grid[i][j]);
            }
        }
        for(auto& [a,b]:mat){
            if(a>=0)sort(b.begin(),b.end());
            else sort(b.rbegin(),b.rend());
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=mat[i-j].back();
                mat[i-j].pop_back();
            }
        }
        return grid;
    }
};