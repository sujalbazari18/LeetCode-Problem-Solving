class Solution {
public:
    string smallestNumber(string p) {
        int n=p.size();
        string s="";
        for(int i=0;i<=n;i++){
            s+=(i+1)+'0';
        }
        for(int i=0;i<n;i++){
            if(p[i]=='D'){
                int start=i;
                while(i<n && p[i]=='D')i++;
                reverse(s.begin()+start,s.begin()+i+1);
            }
        }
        // cout<<s;
        return s;
    }
};