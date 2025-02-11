class Solution {
public:
    // void remove(string& s,string& part){
    //     int n=s.find(part);
    //     if(n!=string::npos){
    //         string a=s.substr(0,n);
    //         string b=s.substr(n+part.size(),s.size());
    //         s=a+b;
    //         remove(s,part);
    //     }else{
    //     return;
    //     }
    // }
    string removeOccurrences(string s, string part) {
        // remove(s,part);
        while(s.find(part)!=string::npos){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};