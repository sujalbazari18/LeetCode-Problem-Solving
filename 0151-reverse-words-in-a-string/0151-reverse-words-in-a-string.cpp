class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string word="",ans="";
        for(int i=0;i<n;i++){
            if(s[i]!=' ')word+=s[i];
            else if(!word.empty()){
                if(!ans.empty())ans=" "+ans;
                ans=word+ans;
                word="";
            }
        }
        if(!word.empty()){
            if(!ans.empty())ans=" "+ans;
            ans=word+ans;
        }
        return ans;
    }
};