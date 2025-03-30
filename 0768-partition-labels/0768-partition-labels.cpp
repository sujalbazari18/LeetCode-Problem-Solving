class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int,int> last;
        int n=s.size();
        for(int i=0;i<n;i++){
            last[s[i]]=i;
        }
        vector<int> ans;
        int end=0,start=0;
        for(int i=0;i<n;i++){
            end=max(end,last[s[i]]);
            if(i==end){
                ans.push_back(end-start+1);
                start=end+1;
            }
        }
        return ans;
    }
};