class Solution {
public:
    void generate(int n,string cur,vector<string>& h){
        if(cur.size()==n){
            h.push_back(cur);
            return ;
        }
        for(auto ch:{'a','b','c'}){
            if(cur.empty() || cur.back()!=ch){
                generate(n,cur+ch,h);
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string> h;
        generate(n,"",h);
        return (k>h.size())?"":h[k-1];
    }
};