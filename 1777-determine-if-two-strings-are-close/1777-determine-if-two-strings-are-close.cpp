class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())return false;
        vector<int> f(26,0);
        vector<int> s(26,0);
        // unordered_set<char> set1,set2;
        for(int i=0;i<word1.size();i++){
            f[word1[i]-'a']++;
            // set1.insert(word1[i]);
        }
        for(int i=0;i<word2.size();i++){
            s[word2[i]-'a']++;
            // set2.insert(word2[i]);
        }
        for(int i=0;i<26;i++){
            if((f[i]==0)!=(s[i]==0))return false;
        }
        // if(set1!=set2)return false;
        sort(f.begin(),f.end());
        sort(s.begin(),s.end());
        return s==f;
    }
};