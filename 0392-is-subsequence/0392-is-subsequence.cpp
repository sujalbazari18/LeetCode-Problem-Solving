class Solution {
public:
    bool sequence(string& s,string& t,int i,int j,vector<vector<int>>& memo){
        if(i==s.size())return true;
        if(j==t.size())return false;
        if(memo[i][j] != -1) return memo[i][j];
        if(s[i]==t[j])memo[i][j]=sequence(s,t,i+1,j+1,memo);
        else memo[i][j]=sequence(s,t,i,j+1,memo);
        return memo[i][j];
    }
    bool isSubsequence(string s, string t) {
        vector<vector<int>> memo(s.size(), vector<int>(t.size(), -1));
        return sequence(s,t,0,0,memo);
    }
};