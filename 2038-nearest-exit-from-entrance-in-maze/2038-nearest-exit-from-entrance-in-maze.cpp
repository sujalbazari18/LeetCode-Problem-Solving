class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        vector<vector<int>> d={{1,0},{0,1},{-1,0},{0,-1}};
        queue<pair<int,int>> q;
        int n=maze.size(),m=maze[0].size();
        maze[e[0]][e[1]]='+';
        q.push({e[0],e[1]});
        int steps=0;
        while(!q.empty()){
            int size=q.size();
            steps++;
            for(int i=0;i<size;i++){
                auto [x,y]=q.front();
                q.pop();
                for(auto& i:d){
                    int a=i[0]+x,b=i[1]+y;
                    if(a>=0 && a<n && b>=0 && b<m && maze[a][b]=='.'){
                        if(a==0 || b==0 || b==m-1 || a==n-1)return steps;
                        maze[a][b]='+';
                        q.push({a,b});
                    }
                }
            } 
        }
        return -1;
    }
};