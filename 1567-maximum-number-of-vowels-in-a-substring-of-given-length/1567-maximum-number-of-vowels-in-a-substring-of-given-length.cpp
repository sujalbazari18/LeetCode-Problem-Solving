class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='i' || c== 'o' || c=='u' || c=='e')return true;
        return false;
    }

    int maxVowels(string s, int k) {
        int n=s.size();
        int vowels=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))vowels++;
        }
        int ans=vowels;
        for(int i=k;i<n;i++){
            if(isVowel(s[i]))vowels++;
            if(isVowel(s[i-k]))vowels--;
            ans=max(ans,vowels);
        }
        return ans;
    }
};