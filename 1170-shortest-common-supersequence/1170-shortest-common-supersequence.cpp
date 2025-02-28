class Solution {
public:
    // string fun(string& str1,string& str2,int i,int j,vector<vector<string>>& dp){
    //     if(i>=str1.size() || j>=str2.size()){
    //         return "";
    //     }
    //     if(!dp[i][j].empty())return dp[i][j];
    //     if(str1[i]==str2[j]){
    //         return dp[i][j]=str1[i]+fun(str1,str2,i+1,j+1,dp);
    //     }else{
    //         string a=fun(str1,str2,i+1,j,dp);
    //         string b=fun(str1,str2,i,j+1,dp);
    //         return dp[i][j]=a.size()>b.size()?a:b;
    //     }
    // }
    // string shortestCommonSupersequence(string str1, string str2) {
    //     int n=str1.size(),m=str2.size();
    //     vector<vector<string>> dp(n,vector<string>(m,""));
    //     string lcs=fun(str1,str2,0,0,dp);
    //     int i=0,j=0;
    //     string result="";
    //     for(char c:lcs){
    //         while(i<n && str1[i]!=c)result+=str1[i++];
    //         while(j<m && str2[j]!=c)result+=str2[j++];
    //         result+=c;
    //         i++;
    //         j++;
    //     }
    //     result+=str1.substr(i)+str2.substr(j);
    //     return result;
    // }
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+2,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        string lcs="";
        int i=n,j=m;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                lcs+=str1[i-1];
                i--;
                j--;
            }else if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else j--;
        }
        reverse(lcs.begin(),lcs.end());
        i=0,j=0;
        string result="";
        for(char c:lcs){
            while(i<n && str1[i]!=c)result+=str1[i++];
            while(j<m && str2[j]!=c)result+=str2[j++];
            result+=c;
            i++,j++;
        }
        result+=str1.substr(i)+str2.substr(j);
        return result;
    }

};