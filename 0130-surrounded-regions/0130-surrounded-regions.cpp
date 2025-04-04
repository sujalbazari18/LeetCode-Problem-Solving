class Solution {
public:
    void dfs(vector<vector<char>>& board,int i,int j){  
        if(i<0 || j<0 || j>=board[0].size() || i>=board.size() || board[i][j]!='O')return;
        board[i][j]='T';
        dfs(board,i+1,j);
        dfs(board,i,j+1);
        dfs(board,i-1,j);
        dfs(board,i,j-1);
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        if(m==0)return ;
        for(int i=0;i<n;i++){
            if(board[i][0]=='O')dfs(board,i,0);
            if(board[i][m-1]=='O')dfs(board,i,m-1);
        }
        for(int j=0;j<m;j++){
            if(board[0][j]=='O')dfs(board,0,j);
            if(board[n-1][j]=='O')dfs(board,n-1,j);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O')board[i][j]='X';
                if(board[i][j]=='T')board[i][j]='O';
            }
        }
    }
};