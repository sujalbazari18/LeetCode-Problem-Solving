class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> ball,colour;
        vector<int> ans;
        int distinct=0;       
        for(auto& q:queries){
            int q1=q[0],q2=q[1];
                if(ball.count(q1)){
                    int prev=ball[q1];
                    if(--colour[prev]==0){
                        distinct--;
                    }
                }
                ball[q1]=q2;
                if(++colour[q2]==1)distinct++;
                ans.push_back(distinct);
        }
        return ans;
    }
};