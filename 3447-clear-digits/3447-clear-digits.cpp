class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                for(int j=i-1;j>=0;j--){
                    if(!isdigit(s[j])){
                        s.erase(j,2);
                        i-=2;
                        n=s.size();
                        break;
                    }
                }
                if(i>=0&&isdigit(s[i])){ 
                    s.erase(i,1);
                    i--;
                    n=s.size();
                }
            }
        }
        return s;
    }
};