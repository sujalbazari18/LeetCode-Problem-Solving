class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        bool flag=true;
        string s="";
        while(i<word1.size() && j<word2.size()){
            if(flag){
                s+=word1[i];
                i++;
                flag=false;
            }else{
                s+=word2[j];
                j++;
                flag=true;
            }
        }
        if(i<word1.size())s+=word1.substr(i);
        if(j<word2.size())s+=word2.substr(j);
        return s;
    }
};