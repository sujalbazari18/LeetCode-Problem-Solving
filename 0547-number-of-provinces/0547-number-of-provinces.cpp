class Solution {
public:
void dfs(int i,vector<bool>& v,vector<vector<int>>& c) {
    v[i]=true;
    for(int j=0;j<c.size();j++){
        if(c[i][j]==1 && v[j]==false){
            dfs(j,v,c);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>visited(n,false);
        int c=0;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                dfs(i,visited,isConnected);
                c++;
            }
        }
        return c;
        
    }
};