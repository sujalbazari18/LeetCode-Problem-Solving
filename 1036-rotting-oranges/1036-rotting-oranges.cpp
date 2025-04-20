class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push({i,j});
                else if(grid[i][j]==1)fresh++;
            }
        }
        if(fresh==0)return 0;
        int ans=0;
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            int size=q.size();
            bool r=false;
            while(size--){
                auto [x,y]=q.front();
                q.pop();
                for(auto& [a,b]:dir){
                    int nx=x+a;
                    int ny=y+b;
                    if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        r=true;
                        q.push({nx,ny});
                        fresh--;
                    }
                }   
            }
            if(r)ans++;
        }
        return !fresh?ans:-1;
    }
};