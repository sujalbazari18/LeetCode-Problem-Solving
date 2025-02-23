class Solution {
public:
    bool hasSameDigits(string t) {
        // string t=s;
        while(t.size()>2){
            string k="";
            for(int i=0;i<t.size()-1;i++){
                int a=t[i]-'0',b=t[i+1]-'0';
                int res=(a+b)%10;
                k.push_back(res+'0');
            }
            t=k;
        }
        return t[0]==t[1];
    }
};