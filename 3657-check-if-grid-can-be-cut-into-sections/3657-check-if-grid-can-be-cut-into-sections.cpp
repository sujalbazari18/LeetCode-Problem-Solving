class Solution {
public:
    bool check(vector<vector<int>>& c){
        sort(c.begin(),c.end());
        int sec=0;
        int end=c[0][1];
        for(auto& i:c){
            int s=i[0],e=i[1];
            if(end<=s){
                sec++;
            }
            end=max(end,e);
        }
        return sec>=2;
    }
    bool checkValidCuts(int n, vector<vector<int>>& r) {
        vector<vector<int>> x,y;
        for(auto& rect:r){
            x.push_back({rect[0],rect[2]});
            y.push_back({rect[1],rect[3]});
        }
        return check(x)||check(y);

    }
};