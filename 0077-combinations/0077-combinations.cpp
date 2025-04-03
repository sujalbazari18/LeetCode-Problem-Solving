class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void fun(int n,int k,int i){
        if(temp.size()+(n-i+1)<k)return ;
        if(temp.size()==k){
            ans.push_back(temp);
            return ;
        }
        for(int j=i;j<=n;j++){
            temp.push_back(j);
            fun(n,k,j+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        fun(n,k,1);
        return ans;
    }
};