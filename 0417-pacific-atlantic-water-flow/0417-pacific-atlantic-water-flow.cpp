class Solution {
public:
        void dfs(vector<vector<int>>& h, int i, int j, vector<vector<bool>>& visited) {
            int n=h.size(), m=h[0].size();
            if (i<0 || j<0 || i>=n || j>=m || visited[i][j]) return;
            visited[i][j]=true;
            // count[i][j]++;
            vector<int> dx={0,0,1,-1};
            vector<int> dy={1,-1,0,0};
            for (int d=0;d<4;d++) {
                int x=i+dx[d], y=j+dy[d];
                if (x>=0 && x<n && y>=0 && y<m && !visited[x][y] && h[x][y]>=h[i][j]) {
                    dfs(h,x,y,visited);
                }
            }
        }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        int n=h.size(),m=h[0].size();
        vector<vector<int>> ans;
        vector<vector<bool>> v1(n,vector<bool>(m,false));
        vector<vector<bool>> v2(n,vector<bool>(m,false));
        // vector<vector<int>> count(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(!v1[i][0]){
                // v1[i][0]=true;
                // count[i][0]++;
                dfs(h,i,0,v1);
            }
        }
        for(int i=0;i<m;i++){
            if(!v1[0][i]){
                // v1[0][i]=true;
                // count[0][i]++;
                dfs(h,0,i,v1);
            }
        }
        for(int i=0;i<n;i++){
            if(!v2[i][m-1]){
                // v2[i][m-1]=true;
                // count[i][m-1]++;
                dfs(h,i,m-1,v2);
            }
        }
        for(int i=0;i<m;i++){
            if(!v2[n-1][i]){
                // v2[n-1][i]=true;
                // count[n-1][j]++;
                dfs(h,n-1,i,v2);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v1[i][j] && v2[i][j])ans.push_back({i,j});
            }
        }
        return ans;
    }
};