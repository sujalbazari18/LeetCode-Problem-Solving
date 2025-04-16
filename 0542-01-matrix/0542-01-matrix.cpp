class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> ans(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    ans[i][j]=0;
                }
            }
        }
        vector<vector<int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            auto [a,b]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int x=a+dir[i][0],y=b+dir[i][1];
                if(x>=0 && x<n && y>=0 && y<m && ans[x][y]==-1){
                    q.push({x,y});
                    ans[x][y]=ans[a][b]+1;
                }
            }
        }
        return ans;
    }
};