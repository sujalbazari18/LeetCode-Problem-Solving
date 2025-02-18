class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int i=0,j=s.size();
        for(char c:s){
            if(c=='I'){
                ans.push_back(i);
                i++;
            }else{
                ans.push_back(j);
                j--;
            }
        }
        ans.push_back(i);
        return ans;
    }
};