class Solution {
public:
    int dp[1001][1001][3];
    vector<int> ss,tt;
    bool pal(const string& s,int i, int j){
        while(i<j){
            if(s[i++]!=s[j--])return false;
        }
        return true;
    }
    vector<int> get(const string& s){
        int n=s.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;++i){
            for(int j=n-1;j>=i;--j){
                if(pal(s,i,j)){
                    ans[i]=j-i+1;
                    break;
                }
            }
        }
        return ans;
    }
    int fun(int i,int j,string& s,string& t,int f){
        if(i>=s.size() && j>=t.size())return 0;
        if(i>=s.size())return tt[j];
        if(j>=t.size())return ss[i];
        if (dp[i][j][f]!=-1)return dp[i][j][f];
        int res=max(ss[i],tt[j]);
        if(s[i]==t[j]){
            if(f==2 || f==0){
                res=max(res,2+fun(i+1,j+1,s,t,0));
            }
        }
        if(f!=0){
            int a=fun(i+1,j,s,t,2);
            int b=fun(i,j+1,s,t,2);
            res=max(res,max(a,b));
        }
        return dp[i][j][f]=res;
    }
    int longestPalindrome(string s, string t) {
        reverse(t.begin(),t.end());
        ss=get(s);
        tt=get(t);
        memset(dp, -1, sizeof(dp));
        return fun(0,0,s,t,2);
    }
};