class Solution {
public:
    string decodeString(string s) {
        stack<int> k;
        string currstr="";
        int currnum=0;
        stack<string> str;
        for(auto& j:s){
            if(isdigit(j)){
                currnum=currnum*10+(j-'0');
            }
            else if(j=='['){
                str.push(currstr);
                k.push(currnum);
                currstr="";
                currnum=0;
            }
            else if(j==']'){
                string temp=currstr;
                currstr=str.top();
                str.pop();
                int re=k.top();
                k.pop();
                while(re--){
                    currstr+=temp;
                }
            }
            else{
                currstr+=j;
            }
        }
        return currstr;
    }
};