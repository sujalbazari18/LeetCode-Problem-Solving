class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> ele;
        for(auto& a:grid){
            for(auto& i:a){
                ele.push_back(i);
            }
        }
        sort(ele.begin(),ele.end());
        int m=ele[ele.size()/2];
        int ans=0;
        for(int i=0;i<ele.size();i++){
            int dif= abs(ele[i]-m);
            if(dif%x!=0)return -1;
            ans+=dif/x;
        }
        return ans;
    }
};