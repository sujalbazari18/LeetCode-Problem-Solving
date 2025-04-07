class Solution {
public:
    // int c=0;
    void fun(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || j>=grid[0].size() || i>=grid.size() || !grid[i][j])return;
        // bool a=false,b=false,c=false,d=false;
        // if(grid[i][j]==0)return true;
        grid[i][j]=0;
        // c++;
        fun(grid,i+1,j);
        fun(grid,i,j+1);
        fun(grid,i-1,j);
        fun(grid,i,j-1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(grid[i][0])fun(grid,i,0);
            if(grid[i][m-1])fun(grid,i,m-1);
        }
        for(int i=0;i<m;i++){
            if(grid[0][i])fun(grid,0,i);
            if(grid[n-1][i])fun(grid,n-1,i);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j])ans++;
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(grid[i][j]){
        //             c=0;
        //             if(fun(grid,i,j)){
        //                 ans+=c;
        //             }
        //         }
        //     }
        // }
        return ans;
    }
};